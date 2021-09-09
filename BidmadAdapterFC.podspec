Pod::Spec.new do |s|

  s.name         = "BidmadAdapterFC"
  s.version      = "0.0.1"
  s.platform     = :ios, "11.0"
  s.summary      = "BidmadAdapterFC is an ad adapter with support for AdColony, AppLovin, and UnityAds."
  s.description  = "BidmadAdapterFC is an ad adapter with support for AdColony, AppLovin, and UnityAds. Please setup BidmadSDK (3.0.0 or higher) first."
  s.homepage     = "https://github.com/bidmad/cocoapod.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => '3.0.0' }
  
  s.static_framework = true
  s.requires_arc     = true

  s.vendored_frameworks = "BidmadAdapterFC.framework"

  s.dependency 'GoogleMobileAdsMediationAppLovin', '10.3.4.0'
  s.dependency 'GoogleMobileAdsMediationAdColony', '4.7.0.0'
  s.dependency 'GoogleMobileAdsMediationUnity', '3.7.2.0'
  s.dependency 'UnityAds', '3.7.2'
  s.dependency 'AdColony', '4.7.0'
  s.dependency 'AppLovinSDK', '10.3.4'

end
