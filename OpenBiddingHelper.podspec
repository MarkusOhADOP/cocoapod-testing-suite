Pod::Spec.new do |s|

  s.name         = "OpenBiddingHelper"
  s.version      = "1.3.0"
  s.platform     = :ios, "11.0"
  s.summary      = "OpenBiddingHelper is for Open Bidding Ads."
  s.description  = "OpenBiddingHelper is for Open Bidding Ads and is a wrapper provided by ADOP."
  s.homepage     = "https://github.com/bidmad/cocoapod.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Kenneth" => "kenneth@adop.cc" }
  s.platform     = :ios, "10.0"
  s.source       = { :git => 'https://github.com/bidmad/cocoapod.git', :tag => '2.8.0' }
  
  s.static_framework = true
  s.requires_arc     = true

  s.vendored_frameworks = "OpenBiddingHelper.framework"

  s.dependency 'GoogleMobileAdsMediationAppLovin', '10.0.1.0'
  s.dependency 'GoogleMobileAdsMediationFacebook', '6.3.1.0'
  s.dependency 'GoogleMobileAdsMediationAdColony', '4.6.0.0'
  s.dependency 'GoogleMobileAdsMediationUnity', '3.6.2.0'
  s.dependency 'Google-Mobile-Ads-SDK', '8.3.0'

end
