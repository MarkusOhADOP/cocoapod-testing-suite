Pod::Spec.new do |s|

  s.name         = "BidmadSDK"
  s.version      = "2.6.3-test1"
  s.summary      = "BidmadSDK, Your Need For ADS Fullfilled."
  s.description  = "This BidmadSDK allows users to communicate with Compass by ADOP."
  s.homepage     = "https://github.com/bidmad/cocoapod.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Kenneth" => "kenneth@adop.cc" }
  s.platform     = :ios, "9.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => '2.6.3-test1' }
  #s.source       = { :git => 'file:///Users/adop_mac/Dev/cocoapod' }
  #s.source       = { :git => 'https://github.com/bidmad/cocoapod.git'}
  s.resource_bundles = {
    'bidmad_asset' => ['Assets/*']
  }
  
  s.static_framework = true
  s.requires_arc     = true

  s.vendored_frameworks = "BidmadSDK.framework", "OpenBiddingHelper.framework"
  # s.vendored_frameworks = "BidmadSDK.framework"

  s.dependency 'GoogleMobileAdsMediationAppLovin', '10.0.1.0'
  s.dependency 'GoogleMobileAdsMediationFacebook', '6.3.0.0'
  s.dependency 'FBAudienceNetwork', '6.3.0'
  s.dependency 'FBSDKCoreKit', '9.1.0'
  s.dependency 'Google-Mobile-Ads-SDK', '8.3.0'
  s.dependency 'TapjoySDK', '12.8.0'
  s.dependency 'UnityAds', '3.7.0'
  s.dependency 'Flutter'

end
