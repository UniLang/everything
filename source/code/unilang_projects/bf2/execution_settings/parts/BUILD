package(default_visibility = ["//visibility:public"])

load("//bazel/rules/cpp:main.bzl", "cpp_main")
load("//bazel/rules/unilang:transfer_unilang_java.bzl", "transfer_unilang_java")
load("//bazel/rules/code:code_to_java.bzl", "code_to_java")
load("//bazel/rules/move_file:move_file.bzl", "move_file")
load("//bazel/rules/move_file:move_file_java.bzl", "move_java_file")

transfer_unilang_java("cpu_limits", "/home/luxe/Desktop/repos/bazel-buildfarm/src/main/java/build/buildfarm/worker/resources/CpuLimits.java")

transfer_unilang_java("mem_limits", "/home/luxe/Desktop/repos/bazel-buildfarm/src/main/java/build/buildfarm/worker/resources/MemLimits.java")

transfer_unilang_java("network_limits", "/home/luxe/Desktop/repos/bazel-buildfarm/src/main/java/build/buildfarm/worker/resources/NetworkLimits.java")
