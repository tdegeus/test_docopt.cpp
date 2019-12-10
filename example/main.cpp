#include <docopt.h>
#define _GLIBCXX_USE_CXX11_ABI 0

// =================================================================================================

static const char USAGE[] =
R"(Run
  Slowly decrease force from a certain initial force, until the system stops. Measure the force
  and the local distance to yielding at the final configuration.

  Input data:
  * "/N": number of particles.
  * "/dt": time step.
  * "/eta": damping coefficient (uniform).
  * "/m": mass (uniform).
  * "/mu": elastic stiffness (uniform).
  * "/k": mean-field coupling stiffness (uniform).
  * "/fext": external force (constant).
  * "/alpha": Gamma yield positions distribution - shape / alpha / k.
  * "/beta": Gamma yield positions distribution - scale / beta / theta.
  * "/tau": Noise decay time.
  * "/noise": Noise amplitude.
  * "/fext_0": Initial force.
  * "/dot_fext": Force decrease rate.

  Output data:
  * "/f_c": Force at which system stops.
  " "/x_sigma": Distance to yielding of each particle.

Usage:
  Run [options] <data.hdf5>

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
