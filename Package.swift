// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "iOSPackage",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "iOSPackage",
            targets: ["iOSPackage"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "iOSPackage",
            path: "./iOSPackage.xcframework"
        ),
    ]
)
