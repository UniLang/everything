# Do not edit this file directly.
# It was auto-generated by: code/programs/reflexivity/reflexive_refresh

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def chromeDrivers():
    http_archive(
        name = "chrome_drivers",
        build_file = "//bazel/deps/chrome_drivers:build.BUILD",
        sha256 = "3fe0091237726a03945889c89aef26b8a6c0feab91d47546de1b9ccb2054500b",
        strip_prefix = "chrome-drivers-8a426d5d974d155363d7dc47cd3021266985c89d",
        urls = [
            "https://github.com/Unilang/chrome-drivers/archive/8a426d5d974d155363d7dc47cd3021266985c89d.tar.gz",
        ],
    )
