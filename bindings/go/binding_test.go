package tree_sitter_poryscript_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_poryscript "github.com/huderlem/poryscript/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_poryscript.Language())
	if language == nil {
		t.Errorf("Error loading Poryscript grammar")
	}
}
