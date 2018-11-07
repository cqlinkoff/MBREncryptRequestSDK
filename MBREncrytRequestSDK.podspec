
Pod::Spec.new do |s|

  s.name         = "MBREncrytRequestSDK"
  s.version      = "0.0.3"
  s.summary      = "MBREncrytRequestSDK."
  s.description  = <<-DESC 
  								MBREncrytRequestSDK for encrytion request.
                   DESC

  s.homepage     = "https://github.com/cqmbr/MBREncrytRequestSDK"
  s.license      = { :type => "Copyright", :text => "LICENSE Copyright 2017 - 2018 cqmbr.net, Inc. All rights reserved." }
  s.author       = { "cqmbr" => "250153903@qq.com" }
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/cqmbr/MBREncrytRequestSDK.git", :tag => "#{s.version}" }

  s.dependency 'MJExtension'
  s.dependency 'YYCategories'
  s.dependency 'AFNetworking'

  s.vendored_frameworks = "#{s.name}.framework"

end
