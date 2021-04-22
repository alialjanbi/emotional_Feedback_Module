/* Autogenerated with kurento-module-creator */

#ifndef __MY_CV_MODULE_IMPL_HPP__
#define __MY_CV_MODULE_IMPL_HPP__

#include "OpenCVFilterImpl.hpp"
#include "MyCvModule.hpp"
#include <EventHandler.hpp>
#include <boost/property_tree/ptree.hpp>
#include "MyCvModuleOpenCVImpl.hpp"

namespace kurento
{
namespace module
{
namespace mycvmodule
{
class MyCvModuleImpl;
} /* mycvmodule */
} /* module */
} /* kurento */

namespace kurento
{
void Serialize (std::shared_ptr<kurento::module::mycvmodule::MyCvModuleImpl> &object, JsonSerializer &serializer);
} /* kurento */

namespace kurento
{
class MediaPipelineImpl;
} /* kurento */

namespace kurento
{
namespace module
{
namespace mycvmodule
{

class MyCvModuleImpl : public OpenCVFilterImpl, public virtual MyCvModule, public virtual MyCvModuleOpenCVImpl
{

public:

  MyCvModuleImpl (const boost::property_tree::ptree &config, std::shared_ptr<MediaPipeline> mediaPipeline);

  virtual ~MyCvModuleImpl() = default;

  void setFilterType (int filterType);
  void setEdgeThreshold (int edgeValue);

  /* Next methods are automatically implemented by code generator */
  virtual bool connect (const std::string &eventType, std::shared_ptr<EventHandler> handler);
  virtual void invoke (std::shared_ptr<MediaObjectImpl> obj,
                       const std::string &methodName, const Json::Value &params,
                       Json::Value &response);

  virtual void Serialize (JsonSerializer &serializer);

private:

  class StaticConstructor
  {
  public:
    StaticConstructor();
  };

  static StaticConstructor staticConstructor;

};

} /* mycvmodule */
} /* module */
} /* kurento */

#endif /*  __MY_CV_MODULE_IMPL_HPP__ */
