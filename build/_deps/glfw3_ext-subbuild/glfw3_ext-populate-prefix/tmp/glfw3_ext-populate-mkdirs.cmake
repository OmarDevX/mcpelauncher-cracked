# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-src"
  "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-build"
  "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-subbuild/glfw3_ext-populate-prefix"
  "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-subbuild/glfw3_ext-populate-prefix/tmp"
  "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-subbuild/glfw3_ext-populate-prefix/src/glfw3_ext-populate-stamp"
  "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-subbuild/glfw3_ext-populate-prefix/src"
  "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-subbuild/glfw3_ext-populate-prefix/src/glfw3_ext-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-subbuild/glfw3_ext-populate-prefix/src/glfw3_ext-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/omar/Desktop/mcpelauncher-ui/build/_deps/glfw3_ext-subbuild/glfw3_ext-populate-prefix/src/glfw3_ext-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
