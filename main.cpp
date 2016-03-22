#include <fstream>
#include <iostream>
#include <QFile>

std::string get_filename() noexcept {
  return "HelloWorld.png";
}

int main()
{
  const std::string filename = get_filename();
  QFile f(":/images/HelloWorld.png");
  if (QFile::exists(filename.c_str()))
  {
    std::remove(filename.c_str());
  }
  f.copy("HelloWorld.png");
  if (!QFile::exists(filename.c_str()))
  {
    std::cerr << "filename '" << filename << "' must be created\n";
    return 000'001;
  }
}
