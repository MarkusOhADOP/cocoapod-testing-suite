Pod::Spec.new do |s|

  s.name         = "ADOPUtility-Dev"
  s.version      = "5.9.0"
  s.platform     = :ios, "11.0"
  s.summary      = "ADOP Utility is a utility collection framework for ADOP Libraries."
  s.description  = "ADOP Uitlity is a utility collection framework for ADOP Libraries, including BidmadSDK, BidmadAdapters, and OpenBiddingHelper"
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'UTIL.5.9.0' }
  
  s.static_framework = false
  s.requires_arc     = true
  s.vendored_frameworks = "ADOPUtility.xcframework"

end
