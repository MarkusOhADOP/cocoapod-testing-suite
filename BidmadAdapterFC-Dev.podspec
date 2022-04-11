Pod::Spec.new do |s|

  s.name         = "BidmadAdapterFC-Dev"
  s.version      = "4.2.1.0"
  s.platform     = :ios, "11.0"
  s.summary      = "BidmadAdapterFC is an ad adapter with support for AdColony, AppLovin, and UnityAds."
  s.description  = "BidmadAdapterFC is an ad adapter with support for AdColony, AppLovin, and UnityAds. Please setup BidmadSDK (4.1.0.0 or higher) first."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => '4.2.1.0' }
  s.default_subspec = 'LatestXcode'
  s.swift_version = '5.0'
  s.static_framework = true
  s.requires_arc     = true

  s.vendored_frameworks = "BidmadAdapterFC.framework"

  s.dependency 'AppLovinMediationGoogleAdManagerAdapter', '8.13.0.8'
  s.dependency 'AppLovinMediationGoogleAdapter', '8.13.0.11'
  s.dependency 'AppLovinMediationUnityAdsAdapter', '3.7.5.1'
  s.dependency 'GoogleMobileAdsMediationAppLovin', '10.3.6.0'
  s.dependency 'GoogleMobileAdsMediationUnity', '3.7.5.0'
  s.dependency 'GoogleMobileAdsMediationIronSource', '7.1.14.0'
  s.dependency 'GoogleMobileAdsMediationVungle', '6.10.5.1'
  s.dependency 'AppLovinSDK', '10.3.6'
  s.dependency 'UnityAds', '3.7.5'
  s.dependency 'IronSourceSDK','7.1.14'
  s.dependency 'VungleSDK-iOS', '6.10.5'
  s.dependency 'ADOPUtility-Dev', '>=4.2.1.0', '<4.3.0.0'
  
  s.subspec 'LatestXcode' do |latestXcode|
    latestXcode.dependency 'AppLovinMediationInMobiAdapter', '10.0.2.1'
    latestXcode.dependency 'GoogleMobileAdsMediationAdColony', '4.7.2.0'
    latestXcode.dependency 'GoogleMobileAdsMediationInMobi', '10.0.2.0'
    latestXcode.dependency 'AdColony', '4.7.2'
    latestXcode.dependency 'InMobiSDK', '10.0.2'
  end
  
  s.subspec 'Xcode12Compatibility' do |xcode12Compatibility|
    xcode12Compatibility.vendored_frameworks = "BidmadAdapterFC.framework"
  end

end
