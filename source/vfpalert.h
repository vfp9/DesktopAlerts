#If Version(3) = [86]
	** VFP 桌面提醒参数
	** 提醒的类型 (主要表单属性)
	#Define DA_TYPEPLAIN	0	&& 无链接，无任务
	#Define DA_TYPELINK		1	&& 一个链接，无任务
	#Define DA_TYPETASK		2	&& 一个任务
	#Define DA_TYPEMULTI	4	&& 两个任务

	** 类型 3 或者 5 将在“任务”提醒中添加一个“链接”。
	** 除此以为，任务提醒不包含链接。

	** 提醒图标
	#Define DA_ICONDEFAULT	      8	&& 默认提醒图标
	#Define DA_ICONSTOP          16	&& 关键消息
	#Define DA_ICONQUESTION	     32 && 问号
	#Define DA_ICONEXCLAMATION   48 && 警告消息
	#Define DA_ICONINFORMATION   64 && 信息消息
	#Define DA_ICONCUSTOM	    128	&& 用户定义的自定义图片
	
	** 这里预留一部分位置以便“内置”一些其他的“默认”图标。

	#Define DA_TASKICONDEFAULT 2048 && 默认任务图标

	** 提醒选项
	#Define DA_NOSETTINGS	   4096	&& 不显示设置按钮
	#Define DA_NOPIN		   8192	&& 不显示推针按钮
	#Define DA_NOCLOSE		  16384 && 不显示关闭按钮

	** 提醒返回值
	#Define DA_NOACTION		-1	&& 提醒已关闭，没有用户交互（超时）
	#Define DA_CLOSED		 1	&& 用户关闭提醒
	#Define DA_LINK			 2	&& 用户点击了链接
	#Define DA_TASKONE		 3	&& 用户选择了任务1
	#Define DA_TASKTWO		 4	&& 用户选择了任务2

	** 文件
	#Define DA_DEFAULTICONFILE	"default_icon.bmp"
	#Define DA_DEFAULTTASKFILE	"default_task.png"
	#Define DA_DEFAULTSOUND		"alert.wav"
	#Define DA_CONFIGFILE		"daconfig.xml"

	** 设置
	#Define DA_FADETIMER		 20	&& tmrFade Interval (毫秒)
	#Define DA_WAIT 		  	 10	&& 默认显示 10 秒
	#Define DA_FADEPERCENT	 	 10	&& 默认情况下，透明度为 10% 
	#Define DA_TRANSPARENCY 	255 * (DA_FADEPERCENT/100)

	** 字符串
	#Define DA_DEFAULTTITLE	"提醒消息"

	** 提醒设置界面的默认 'CAPTIONS'
	** 特别感谢 Emerson Stanton 的反馈和建议！

	#Define DA_SETTINGS				"提醒设置"
	#Define	DA_LBLHOWLONG			"提醒应在屏幕上显示多长时间？"
	#Define DA_LBLSECONDS			"秒"
	#Define	DA_LBLHOWTRANSPARENT	"提醒应具有的透明度？"
	#Define DA_LBLPERCENT			"百分比"
	#Define DA_CHKSOUND				"提醒出现时播放声音"
	#Define DA_CMDOK				"确定(\<O)"
	#Define DA_CMDCANCEL			"取消"

	** 下面的常量用于表单 MouseMove 事件中的 API 函数。
	#Define WM_NULL        0
	#Define WM_SYSCOMMAND  0x112
	#Define WM_LBUTTONUP   0x202
	#Define MOUSE_MOVE     0xf012

	** 类型库属性支持的COM_Attrib标志设置
	#Define COMATTRIB_RESTRICTED	0x100000			&& 不应从宏语言访问属性/方法。
	#Define COMATTRIB_HIDDEN		0x40		&& 不应向用户显示属性/方法，尽管它存在且可绑定。
	#Define COMATTRIB_NONBROWSABLE	0x400		&& 属性/方法显示在对象浏览器中，但不显示在属性浏览器中。
	#Define COMATTRIB_READONLY		0x100000	&& 该属性是只读的（仅适用于Properties）。
	#Define COMATTRIB_WRITEONLY		0x200000	&& 该属性是只写的（仅适用于Properties）。

	#Define CRLF	Chr(13) + Chr(10)
#Else
	** VFP Desktop Alert Parameters
	** Types of Alert (Major Form Properties)
	#Define DA_TYPEPLAIN	0	&& No Links, No Tasks
	#Define DA_TYPELINK		1	&& One Link, No Tasks
	#Define DA_TYPETASK		2	&& One Task
	#Define DA_TYPEMULTI	4	&& Two Tasks

	** A Type of 3 or 5 will add a "link" to the "task" alert.
	** Otherwise, the task alert will not include a link.

	** Alert Icons
	#Define DA_ICONDEFAULT	      8	&& Default Alert Icon
	#Define DA_ICONSTOP          16	&& Critical message
	#Define DA_ICONQUESTION	     32 && Question Mark
	#Define DA_ICONEXCLAMATION   48 && Warning message
	#Define DA_ICONINFORMATION   64 && Information message
	#Define DA_ICONCUSTOM	    128	&& User-defined custom graphic

	** Left some room in here to "build-in" some other
	** 'default' icons.

	#Define DA_TASKICONDEFAULT 2048 && Default Task Icon

	** Alert Options
	#Define DA_NOSETTINGS	   4096	&& Do not show the settings button
	#Define DA_NOPIN		   8192	&& Do not show the push-pin button
	#Define DA_NOCLOSE		  16384 && Do not show the close button

	** Alert Return Values
	#Define DA_NOACTION		-1	&& Alert closed with no user interaction (timeout)
	#Define DA_CLOSED		 1	&& User closed the alert
	#Define DA_LINK			 2	&& User clicked the link
	#Define DA_TASKONE		 3	&& User chose Task 1
	#Define DA_TASKTWO		 4	&& User chose Task 2

	** Files
	#Define DA_DEFAULTICONFILE	"default_icon.bmp"
	#Define DA_DEFAULTTASKFILE	"default_task.png"
	#Define DA_DEFAULTSOUND		"alert.wav"
	#Define DA_CONFIGFILE		"daconfig.xml"

	** Settings
	#Define DA_FADETIMER		 20	&& tmrFade Interval (Milliseconds)
	#Define DA_WAIT 		  	 10	&& Show the alert for ten seconds by default
	#Define DA_FADEPERCENT	 	 10	&& By default, make it 10% Transparent
	#Define DA_TRANSPARENCY 	255 * (DA_FADEPERCENT/100)

	** Strings
	#Define DA_DEFAULTTITLE	"Desktop Alert Message"

	** Default 'CAPTIONS' for the settings screen
	** Special thanks to Emerson Stanton Reed for
	** his suggestion!
	#Define DA_SETTINGS				"Desktop Alerts Settings"
	#Define	DA_LBLHOWLONG			"How long should the Desktop Alert appear on-screen?"
	#Define DA_LBLSECONDS			"seconds"
	#Define	DA_LBLHOWTRANSPARENT	"How transparent should the Desktop Alert be?"
	#Define DA_LBLPERCENT			"percent"
	#Define DA_CHKSOUND				"Play a sound when the Alert appears"
	#Define DA_CMDOK				"\<OK"
	#Define DA_CMDCANCEL			"Cancel"

	** The following are used by the API functions in the form's MouseMove.
	#Define WM_NULL        0
	#Define WM_SYSCOMMAND  0x112
	#Define WM_LBUTTONUP   0x202
	#Define MOUSE_MOVE     0xf012

	** COM_Attrib flag settings for Type Library attributes support
	#Define COMATTRIB_RESTRICTED	0x100000			&& The property/method should not be accessible from macro languages.
	#Define COMATTRIB_HIDDEN		0x40		&& The property/method should not be displayed to the user, although it exists and is bindable.
	#Define COMATTRIB_NONBROWSABLE	0x400		&& The property/method appears in an object browser, but not in a properties browser.
	#Define COMATTRIB_READONLY		0x100000	&& The property is read-only (applies only to Properties).
	#Define COMATTRIB_WRITEONLY		0x200000	&& The property is write-only (applies only to Properties).

	#Define CRLF	Chr(13) + Chr(10)
#Endif
