import XCTest
import SwiftTreeSitter
import TreeSitterPoryscript

final class TreeSitterPoryscriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_poryscript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Poryscript grammar")
    }
}
