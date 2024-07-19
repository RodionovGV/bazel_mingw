# чтобы работал MinGW
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "mingw",
    remote = "https://github.com/EhabHelaly/bazel_mingw_toolchain.git",
    commit = "8750b126a1e45e6dbfc44c99887bb14e5de7d481",
    shallow_since = "1656754688 +0200",
)

# gtest - добавляем тестирование
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = "googletest",
  remote = "https://github.com/google/googletest",
  tag = "release-1.8.1"
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/releases/download/20240116.2/abseil-cpp-20240116.2.tar.gz"],  # 2020-02-11T18:50:53Z
  strip_prefix = "abseil-cpp-20240116.2",
  sha256 = "733726B8C3A6D39A4120D7E45EA8B41A434CDACDE401CBA500F14236C49B39DC",
)

