#pragma once
#include "core/providers/nnapi/nnapi_builtin/nnapi_lib/NeuralNetworksWrapper.h"

#ifdef __ANDROID__
#include <android/api-level.h>
#endif

struct NnApi;

namespace onnxruntime {
namespace nnapi {

class ModelBuilder;

enum class TargetDeviceOption : int8_t {
  ALL_DEVICES,  // use all available target devices

  /* TODO support these options
  PREFERRED_DEVICES,  // Use one or more preferred devices (must be given)
  EXCLUDED_DEVICES,   // Exclude one or more devices (must be given)
   */

  CPU_DISABLED,  // use all available target devices except CPU
  CPU_ONLY,      // use CPU only
};

int32_t GetNNAPIRuntimeFeatureLevel(const ::NnApi* nnapi);

int32_t NNAPIGetTargetFeatureLevel(const ::NnApi* nnapi, const std::vector<ANeuralNetworksDevice*>& device_handles);
int32_t NNAPIGetTargetFeatureLevel(const ModelBuilder& model_builder);

Status GetTargetDevices(const ::NnApi* nnapi, TargetDeviceOption target_device_option,
                        std::vector<ANeuralNetworksDevice*>& nnapi_target_devices, std::string& nnapi_target_devices_detail);
int32_t NNAPIGetTargetFeatureLevelWithDeviceTag(const ::NnApi* nnapi, TargetDeviceOption target_device_option);
}  // namespace nnapi
}  // namespace onnxruntime
