Pod::Spec.new do |s|

  s.name         = "BidmadAdapterFNC-Dev"
  s.version      = "5.0.0.0"
  s.platform     = :ios, "11.0"
  s.summary      = "BidmadAdapterFNC is an ad adapter with support for Facebook Audience Network, Tapjoy, AdFit, Pangle, Fyber, and ADOP ads"
  s.description  = "BidmadAdapterFNC is an ad adapter with support for Facebook Audience Network, Tapjoy, AdFit, Pangle, Fyber, and ADOP ads. Please setup BidmadSDK (4.1.0.0 or higher) first."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'FNC.5.0.0.0' }
  s.swift_version = '5.0'
  s.static_framework = true
  s.requires_arc     = true

  s.vendored_frameworks = "BidmadAdapterFNC.xcframework"

  s.dependency 'GoogleMobileAdsMediationFacebook', '>=6.9.0.1', '<=6.12.0.0'
  s.dependency 'GoogleMobileAdsMediationFyber', '8.1.6.0'
  s.dependency 'GoogleMobileAdsMediationPangle', '4.7.0.6.0'
  s.dependency 'Ads-Global', '4.7.0.6'
  s.dependency 'TapjoySDK', '>=12.9.0', '<=12.11.0'
  s.dependency 'Fyber_Marketplace_SDK', '8.1.6'
  s.dependency 'ADOPUtility-Dev', '>=5.0.0.0', '<5.1.0.0'
  s.dependency 'AdopPrebidSdk-Dev', '>=1.0.0', '<1.1.0'
  s.dependency 'OpenWrapHandlerDFP', '3.0.1'
  s.dependency 'OpenWrapSDK', '2.6.2'
  s.dependency 'AdFitSDK', '3.7.0'

end
