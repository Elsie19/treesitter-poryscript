// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterPoryscript",
    products: [
        .library(name: "TreeSitterPoryscript", targets: ["TreeSitterPoryscript"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterPoryscript",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterPoryscriptTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterPoryscript",
            ],
            path: "bindings/swift/TreeSitterPoryscriptTests"
        )
    ],
    cLanguageStandard: .c11
)
