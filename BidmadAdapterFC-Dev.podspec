Pod::Spec.new do |s|

  s.name         = "BidmadAdapterFC-Dev"
  s.version      = "4.2.0.0"
  s.platform     = :ios, "11.0"
  s.summary      = "BidmadAdapterFC is an ad adapter with support for AdColony, AppLovin, and UnityAds."
  s.description  = "BidmadAdapterFC is an ad adapter with support for AdColony, AppLovin, and UnityAds. Please setup BidmadSDK (4.1.0.0 or higher) first."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => '4.2.0.0' }
  
  s.static_framework = true
  s.requires_arc     = true

  s.vendored_frameworks = "BidmadAdapterFC.framework"

  s.dependency 'GoogleMobileAdsMediationAppLovin', '10.3.6.0'
  s.dependency 'AppLovinSDK', '10.3.6'
  s.dependency 'GoogleMobileAdsMediationAdColony', '4.7.2.0'
  s.dependency 'AdColony', '4.7.2'
  s.dependency 'GoogleMobileAdsMediationUnity', '3.7.5.0'
  s.dependency 'UnityAds', '3.7.5'
  s.dependency 'GoogleMobileAdsMediationInMobi', '10.0.2.0'
  s.dependency 'InMobiSDK', '10.0.2'
  s.dependency 'GoogleMobileAdsMediationIronSource', '7.1.14.0'
  s.dependency 'IronSourceSDK','7.1.14'
  s.dependency 'GoogleMobileAdsMediationVungle', '6.10.5.1'
  s.dependency 'VungleSDK-iOS', '6.10.5'
  s.dependency 'ADOPUtility-Dev', '4.2.0.0'

end
