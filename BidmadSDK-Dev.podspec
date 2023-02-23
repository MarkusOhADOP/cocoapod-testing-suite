Pod::Spec.new do |s|

  s.name         = "BidmadSDK-Dev"
  s.version      = "5.8.0"
  s.platform     = :ios, "11.0"
  s.summary      = "Integrated App Monetization Solution for Mobile Apps by all Publishers"
  s.description  = "BidmadSDK allows users to communicate with Compass by ADOP. Our mediation platform optimizes for the utmost profit."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'SDK.5.8.0' }
  s.resource_bundles = {
    'bidmad_asset' => ['Assets/*']
  }
    
  s.swift_version = '5.0'
  s.default_subspec = 'ForNative'
  
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "BidmadSDK.xcframework"

  s.dependency 'Google-Mobile-Ads-SDK', '9.14.0'
  s.dependency 'ADOPUtility-Dev', '5.8.0'

  # AdColony
  s.dependency 'GoogleMobileAdsMediationAdColony', '4.9.0.0'
  s.dependency 'AdColony', '4.9.0'
  
  # AdopPrebidSdk
  s.dependency 'AdopPrebidSdk', '>=1.1', '<1.2.0'
  
  # AppLovin
  s.dependency 'GoogleMobileAdsMediationAppLovin', '11.4.2.0'
  s.dependency 'AppLovinSDK', '11.4.2'
  
  # Pangle
  s.dependency 'GoogleMobileAdsMediationPangle', '4.7.0.6.0'
  s.dependency 'Ads-Global', '4.7.0.6'
  
  # Fyber
  s.dependency 'GoogleMobileAdsMediationFyber', '8.1.6.0'
  s.dependency 'Fyber_Marketplace_SDK', '8.1.6'
  
  # InMobi
  s.dependency 'GoogleMobileAdsMediationInMobi', '10.1.0.0'
  s.dependency 'InMobiSDK', '10.1.0'
  
  # IronSource
  s.dependency 'GoogleMobileAdsMediationIronSource', '7.2.5.1.0'
  s.dependency 'IronSourceSDK','7.2.5.1'
  
  # Meta
  s.dependency 'GoogleMobileAdsMediationFacebook', '>=6.9.0.1', '<=6.12.0.0'
  
  # Tapjoy
  s.dependency 'TapjoySDK', '>=12.9.0', '<=12.11.0'
  
  # UnityAds
  s.dependency 'GoogleMobileAdsMediationUnity', '4.4.1.0'
  s.dependency 'UnityAds', '4.4.1'
  
  # Vungle
  s.dependency 'GoogleMobileAdsMediationVungle', '6.12.0.0'
  s.dependency 'VungleSDK-iOS', '6.12.0'
  
  # PubMatic
  s.dependency 'OpenWrapHandlerDFP', '3.0.1'
  s.dependency 'OpenWrapSDK', '2.6.2'
  
  s.subspec 'ForNative' do |forNative|
  end
  
  s.subspec 'ForFlutter' do |forflutter|
    forflutter.platform = :ios, "11.0"
    forflutter.vendored_frameworks = "BidmadSDK.xcframework"
    forflutter.resource_bundles = {
      'bidmad_asset' => ['Assets/*']
    }
    forflutter.dependency 'Flutter'
  end

end
