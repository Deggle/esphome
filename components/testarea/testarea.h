#include "esphome.h"

class TestArea : public Component {
 public:
  
  void setup() override {

  }
  
  void loop() override {
  
    // You can also log messages
    ESP_LOGD("testarea", "Testing 123");
    
  }
  
};
