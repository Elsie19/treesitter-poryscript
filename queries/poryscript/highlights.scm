; highlight.scm for poryscript

; Basic highlight groups
(comment) @comment                       ; Highlight comments
[
 ("const")
 ("if")
 ("script")
 ("mart")
] @keyword
(script script_name: (identifier) @function)
(const) @constant ; Highlight constants
(const
  const_name: (identifier) @constant)
(scope) @label

(identifier) @variable                   ; Variables and identifiers
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$"))
(function_call function_name: (identifier) @function) ; Functions

(number) @number                         ; Highlight numbers
(string) @string                         ; Strings

(interpolation) @variable.builtin        ; Highlight interpolations within strings
(escape_sequence) @escape                ; Escape sequences within strings

; Operators and keywords
[(operator) (additives)] @operator       ; Comparison operators (e.g., ==, !=)
(negate) @operator                       ; Negation operator (!)
(boolean) @boolean                       ; Booleans (TRUE, FALSE, etc.)
