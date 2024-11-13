; highlight.scm for poryscript

; Basic highlight groups
(comment) @comment
("const") @modifier
("if") @keyword.conditional

; Structure names
[
 ("script")
 ("mart")
 ("text")
] @keyword.function

; Match the names
(script script_name: (identifier) @function)
(mart mart_name: (identifier) @function)
(text text_name: (identifier) @function)

; Highlight constants
(const) @constant
(const
  const_name: (identifier) @constant)

; Scope as well
(scope) @label

(identifier) @variable
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$")) ; Make uppercase different "type"

; Highlight functions and builtins
(function_call function_name: (identifier) @function)
(function_call builtin_func: (builtin_func) @function.builtin)

; Basic types
(number) @number
(string) @string
(boolean) @boolean

; String related stuff
(interpolation
  "{" @punctuation.special
  "}" @punctuation.special) @embedded
(escape_sequence) @string.escape

; Operators and keywords
[(operator) (additives) (logical_operator)] @operator
(negate) @operator
