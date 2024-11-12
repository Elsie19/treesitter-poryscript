; highlight.scm for poryscript

; Basic highlight groups
(comment) @comment                       ; Highlight comments
[
 ("const")
 ("if")
 ("script")
 ("mart")
 ("text")
] @keyword
(script script_name: (identifier) @function)
(const) @constant ; Highlight constants
(const
  const_name: (identifier) @constant)
(scope) @label ; For things like (local) or (global)

(identifier) @variable ; Variables
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$")) ; Make uppercase different "type"

(function_call function_name: (identifier) @function) ; Functions

(function_call builtin_func: (builtin_func) @function.builtin) ; Builtin overrides

(number) @number                         ; Highlight numbers
(string) @string                         ; Strings

(interpolation
  "{" @punctuation.special
  "}" @punctuation.special) @embedded
(escape_sequence) @string.escape ; Escape sequences within strings

; Operators and keywords
[(operator) (additives)] @operator       ; Comparison operators (e.g., ==, !=)
(negate) @operator                       ; Negation operator (!)
(boolean) @boolean                       ; Booleans (TRUE, FALSE, etc.)
