#include "yaml-cpp-0.6/emitterstyle.h"
#include "yaml-cpp-0.6/eventhandler.h"

#include "gmock/gmock.h"

namespace YAML_0_6 {

class MockEventHandler : public EventHandler {
 public:
  MOCK_METHOD1(OnDocumentStart, void(const Mark&));
  MOCK_METHOD0(OnDocumentEnd, void());

  MOCK_METHOD2(OnNull, void(const Mark&, anchor_t));
  MOCK_METHOD2(OnAlias, void(const Mark&, anchor_t));
  MOCK_METHOD4(OnScalar, void(const Mark&, const std::string&, anchor_t,
                              const std::string&));

  MOCK_METHOD4(OnSequenceStart, void(const Mark&, const std::string&, anchor_t,
                                     EmitterStyle::value));
  MOCK_METHOD0(OnSequenceEnd, void());

  MOCK_METHOD4(OnMapStart, void(const Mark&, const std::string&, anchor_t,
                                EmitterStyle::value));
  MOCK_METHOD0(OnMapEnd, void());
};
}
