# travis_qmake_gcc_cpp14_qt

Branch   |[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---------|--------------------------------------------------------
`master` |[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt)
`develop`|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL` and `Qt`
 * Code coverage: none
 * Source: QDialog with Qt resource file

The project creates an image file, called [HelloWorld.png](HelloWorld.png).

Less complex builds:
 * C++98: [travis_qmake_gcc_cpp98_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_qt)
 * C++11: [travis_qmake_gcc_cpp11_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11_qt)
 * STL only: [travis_qmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14)
