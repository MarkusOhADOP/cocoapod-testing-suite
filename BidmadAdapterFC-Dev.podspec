Pod::Spec.new do |s|

  s.name         = "BidmadAdapterFC-Dev"
  s.version      = "4.6.0.1"
  s.platform     = :ios, "11.0"
  s.summary      = "BidmadAdapterFC is an ad adapter with support for AdColony, AppLovin, and UnityAds."
  s.description  = "BidmadAdapterFC is an ad adapter with support for AdColony, AppLovin, and UnityAds. Please setup BidmadSDK (4.1.0.0 or higher) first."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'FC.5.0.0.0' }
  s.swift_version = '5.0'
  s.static_framework = true
  s.requires_arc     = true

  s.vendored_frameworks = "BidmadAdapterFC.xcframework"

  s.dependency 'GoogleMobileAdsMediationAppLovin', '11.4.2.0'
  s.dependency 'GoogleMobileAdsMediationUnity', '4.4.1.0'
  s.dependency 'GoogleMobileAdsMediationIronSource', '7.2.5.1.0'
  s.dependency 'GoogleMobileAdsMediationVungle', '6.12.0.0'
  s.dependency 'AppLovinSDK', '11.4.2'
  s.dependency 'UnityAds', '4.4.1'
  s.dependency 'IronSourceSDK','7.2.5.1'
  s.dependency 'VungleSDK-iOS', '6.12.0'
  s.dependency 'ADOPUtility', '>=4.6.0.0', '<4.7.0.0'
  s.dependency 'GoogleMobileAdsMediationAdColony', '4.9.0.0'
  s.dependency 'GoogleMobileAdsMediationInMobi', '10.1.0.0'
  s.dependency 'AdColony', '4.9.0'
  s.dependency 'InMobiSDK', '10.1.0'

end
