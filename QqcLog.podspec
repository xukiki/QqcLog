Pod::Spec.new do |s|

  s.license      = "MIT"
  s.author       = { "qqc" => "20599378@qq.com" }
  s.platform     = :ios, "8.0"
  s.requires_arc  = true

  s.name         = "QqcLog"
  s.version      = "1.0.0"
  s.summary      = "QqcLog"
  s.homepage     = "https://github.com/xukiki/QqcLog"
  s.source       = { :git => "https://github.com/xukiki/QqcLog.git", :tag => "#{s.version}" }
  
  s.source_files  = ["QqcLog/*.{h,m}"]

end
