#include <docopt.h>

// =================================================================================================

static const char USAGE[] =
R"(Foo
  bar

Usage:
  Run [options]

Options:
  -h, --help      Show help.
      --version   Show version.

(c) Tom de Geus
)";

// =================================================================================================

int main(int argc, const char** argv)
{
  // parse command-line arguments
  std::map<std::string, docopt::value> args = docopt::docopt(
    USAGE, {argv+1,argv+argc}, true, "v0.0.1"
  );

  return 0;
}
