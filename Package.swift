// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "MinderaPeopleKMMSharedLib",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "MinderaPeopleKMMSharedLib",
            targets: ["MinderaPeopleKMMSharedLib"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "MinderaPeopleKMMSharedLib",
            path: "./MinderaPeopleKMMSharedLib.xcframework"
        ),
    ]
)
