# Copyright 2019 The MediaPipe Authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("//mediapipe/examples/desktop/hallway_tile:windows_dll_library.bzl", "windows_dll_library")

licenses(["notice"])
package(default_visibility = ["//mediapipe/examples:__subpackages__"])
filegroup(
    name = "srcs",
    srcs = glob(["**"]),
    visibility = ["//examples:__pkg__"],
)

# Define the shared library
windows_dll_library(
    name = "hallway_tile_dylib",
    hdrs = ["hallway-tile-library.h"],
    srcs = ["hallway-tile-library.cc"],
        deps = [
        "//third_party:opencv_binary",
        "//mediapipe/examples/desktop:demo_run_graph_main",
        "//mediapipe/graphs/face_mesh:desktop_live_calculators",
    ],
    # Define COMPILING_DLL to export symbols during compiling the DLL.
    copts = ["/DCOMPILING_DLL"],
)

## Link to hallway_tile_dylib.dll through its import library.
cc_binary(
    name = "hallway_runner",
    srcs = ["dll_loader/link-to-dll-via-lib.cc","hallway-tile-library.h"],
    deps = [":hallway_tile_dylib"],
    linkopts =["/FORCE:MULTIPLE"]
)