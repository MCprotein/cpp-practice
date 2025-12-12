#include "header1.h"
#include "header2.h"

using header1::foo;
using namespace header1;
namespace header1 {
int func() {
    foo();
    header2::foo();
    header1::bar();
}
}  // namespace header1