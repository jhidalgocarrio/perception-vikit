#include <boost/test/unit_test.hpp>
#include <vikit/Dummy.hpp>

using namespace vikit;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    vikit::DummyClass dummy;
    dummy.welcome();
}
