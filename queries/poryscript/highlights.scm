; highlight.scm for poryscript

; Basic highlight groups
(comment) @comment
("const") @modifier
[
 ("if") 
 ("elif")
 ("else")
 ("switch")
 ("case")
 ("default")
] @keyword.conditional

; This is for stuff in text like `ascii"hello"`
(text_directive) @keyword.directive

[("while") ("do")] @keyword.repeat

; Structure names
[
 ("script")
 ("mart")
 ("text")
 ("movement")
 ("mapscripts")
] @keyword.function

; Match the names
(
 [
  (script)
  (mart)
  (text)
  (movement)
  (mapscripts)
 ] name: (identifier) @function
)

; Highlight constants
(const) @constant
(const
  const_name: (identifier) @constant)

; Scope as well
(scope_marker) @label

(identifier) @variable
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$")) ; Make uppercase different "type"

; Highlight functions and builtins
(function_call function_name: (identifier) @function)
(builtin_func) @function.builtin
(builtin_control_flow) @keyword.return

; Basic types
(number) @number
(string) @string
(boolean) @boolean

; String related stuff
(interpolation
  "{" @punctuation.special
  "}" @punctuation.special) @embedded
(escape_sequence) @string.escape
(",") @punctuation.delimiter

; Operators and keywords
[(operator) (additives) (logical_operator)] @operator
(negate) @operator
