Pod::Spec.new do |s|

  s.name         = "TulingGameSDK"

  s.version      = "1.0.0"

  s.summary      = "图灵游戏发行商iOS-SDK,集成登录、支付系统。http://www.tulinggame.com"

  s.description  = <<-DESC
                   TulingGameSDK，图灵游戏发行商iOS-SDK,集成登录、支付系统。http://www.tulinggame.com
                  DESC

  s.homepage     = "https://github.com/TulingGameSDK/TulingGameSDK"

  s.license = { :type => 'MIT', :text => <<-LICENSE
         Copyright PPAbner 2017-2018
          LICENSE
      }

  s.author             = { "TulingGameSDK_Dev" => "TulingGameSDK@163.com" }
  
  s.social_media_url   = "http://www.tulinggame.com/"

  s.platform     = :ios

  s.ios.deployment_target = "8.0"

  s.source       = { :git => "https://github.com/TulingGameSDK/TulingGameSDK", :tag => "#{s.version}" }

  s.source_files = "ThreeRingControl", "ThreeRingControl/**/*.{h,m,swift}"

  s.resources = "ThreeRingControl/*.{strings,png}"

  s.requires_arc = true

end