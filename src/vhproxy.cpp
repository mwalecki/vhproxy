#include <rtt/TaskContext.hpp>
#include <rtt/Component.hpp>

// we assume this is done in all the following code listings :
using namespace RTT;

class VHProxy : public TaskContext
{
public:
	VHProxy(const std::string& name) : TaskContext(name) {}
};

// from Component.hpp:
ORO_CREATE_COMPONENT( VHProxy );

