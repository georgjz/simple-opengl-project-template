# Simple OpenGL Project Template

This is a simple project template to write OpenGL code that uses [GLFW][1], [GLM][2], and [glad][3]. To run it, you'll need the following tools:

* [git][4]
* [CMake][5]
* [make][6] (see notes below)
* a C/C++ compiler

## Features

This repository includes both [GLFW][1] and [GLM][2] as a submodule, so you do not need to install them locally. The idea is to make this repository completely self-contained.

To write your own code, you can place your include files in `include`, and your source files in the `src` directories, respectively. You can place source files in arbitrary directory depth. You only need to make sure, that you add the appropiate CMake files. See `src/CMakeLists.txt`, `src/main/CMakeLists.txt`, and src/my_functions/CMakeLists.txt` to see how it works.

## Usage

To download it, open a command line and type in:

```bash
git clone --recurse-submodules https://github.com/georgjz/simple-opengl-project-template.git
```

Then create a build directory:

```bash
mkdir build && cd build
cmake ..
make
```

This will build the example code in the repository.

To update all submodules, use this:

```bash
git submodule update --recursive --remote
```

## Notes

* I've only tested it with `make` and `ninja` on Linux as build systems; i.e., I have **not** tested it on either Windows or OSX and their respective build systems.

[1]: https://www.glfw.org
[2]: https://glm.g-truc.net/0.9.9/index.html
[3]: https://glad.dav1d.de
[4]: https://git-scm.com
[5]: https://cmake.org
[6]: https://www.gnu.org/software/make/
