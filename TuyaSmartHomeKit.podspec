Pod::Spec.new do |s|
  s.name = "TuyaSmartHomeKit"
  s.version = "2.10.97"
  s.summary = "A short description of #{s.name}."
  s.license = {"type"=>"MIT"}
  s.authors = {"0x5e"=>"gaosen@tuya.com"}
  s.homepage = "https://tuya.com"
  s.source = { :http => "https://airtake-public-data.oss-cn-hangzhou.aliyuncs.com/smart/app/package/sdk/ios/#{s.name}-#{s.version}.zip", :type => "zip" }

  s.static_framework = true
  s.ios.deployment_target = '8.0'
  s.watchos.deployment_target = '2.0'

  s.source_files = 'Headers/**/*.h'

  s.dependency 'TuyaSmartBaseKit'
  s.dependency 'TuyaSmartDeviceKit'
  
  s.ios.dependency 'TuyaSmartActivatorKit'
  s.ios.dependency 'TuyaSmartMQTTChannelKit'
  s.ios.dependency 'TuyaSmartSocketChannelKit'
  s.ios.dependency 'TuyaSmartBLEKit'
  s.ios.dependency 'TuyaSmartBLEMeshKit'

  s.dependency 'TuyaSmartSceneKit'
  s.dependency 'TuyaSmartTimerKit'
  s.dependency 'TuyaSmartMessageKit'
  s.dependency 'TuyaSmartFeedbackKit'

end
