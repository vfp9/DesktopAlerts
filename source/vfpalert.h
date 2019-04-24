#If Version(3) = [86]
	** VFP �������Ѳ���
	** ���ѵ����� (��Ҫ������)
	#Define DA_TYPEPLAIN	0	&& �����ӣ�������
	#Define DA_TYPELINK		1	&& һ�����ӣ�������
	#Define DA_TYPETASK		2	&& һ������
	#Define DA_TYPEMULTI	4	&& ��������

	** ���� 3 ���� 5 ���ڡ��������������һ�������ӡ���
	** ������Ϊ���������Ѳ��������ӡ�

	** ����ͼ��
	#Define DA_ICONDEFAULT	      8	&& Ĭ������ͼ��
	#Define DA_ICONSTOP          16	&& �ؼ���Ϣ
	#Define DA_ICONQUESTION	     32 && �ʺ�
	#Define DA_ICONEXCLAMATION   48 && ������Ϣ
	#Define DA_ICONINFORMATION   64 && ��Ϣ��Ϣ
	#Define DA_ICONCUSTOM	    128	&& �û�������Զ���ͼƬ
	
	** ����Ԥ��һ����λ���Ա㡰���á�һЩ�����ġ�Ĭ�ϡ�ͼ�ꡣ

	#Define DA_TASKICONDEFAULT 2048 && Ĭ������ͼ��

	** ����ѡ��
	#Define DA_NOSETTINGS	   4096	&& ����ʾ���ð�ť
	#Define DA_NOPIN		   8192	&& ����ʾ���밴ť
	#Define DA_NOCLOSE		  16384 && ����ʾ�رհ�ť

	** ���ѷ���ֵ
	#Define DA_NOACTION		-1	&& �����ѹرգ�û���û���������ʱ��
	#Define DA_CLOSED		 1	&& �û��ر�����
	#Define DA_LINK			 2	&& �û����������
	#Define DA_TASKONE		 3	&& �û�ѡ��������1
	#Define DA_TASKTWO		 4	&& �û�ѡ��������2

	** �ļ�
	#Define DA_DEFAULTICONFILE	"default_icon.bmp"
	#Define DA_DEFAULTTASKFILE	"default_task.png"
	#Define DA_DEFAULTSOUND		"alert.wav"
	#Define DA_CONFIGFILE		"daconfig.xml"

	** ����
	#Define DA_FADETIMER		 20	&& tmrFade Interval (����)
	#Define DA_WAIT 		  	 10	&& Ĭ����ʾ 10 ��
	#Define DA_FADEPERCENT	 	 10	&& Ĭ������£�͸����Ϊ 10% 
	#Define DA_TRANSPARENCY 	255 * (DA_FADEPERCENT/100)

	** �ַ���
	#Define DA_DEFAULTTITLE	"������Ϣ"

	** �������ý����Ĭ�� 'CAPTIONS'
	** �ر��л Emerson Stanton �ķ����ͽ��飡

	#Define DA_SETTINGS				"��������"
	#Define	DA_LBLHOWLONG			"����Ӧ����Ļ����ʾ�೤ʱ�䣿"
	#Define DA_LBLSECONDS			"��"
	#Define	DA_LBLHOWTRANSPARENT	"����Ӧ���е�͸���ȣ�"
	#Define DA_LBLPERCENT			"�ٷֱ�"
	#Define DA_CHKSOUND				"���ѳ���ʱ��������"
	#Define DA_CMDOK				"ȷ��(\<O)"
	#Define DA_CMDCANCEL			"ȡ��"

	** ����ĳ������ڱ� MouseMove �¼��е� API ������
	#Define WM_NULL        0
	#Define WM_SYSCOMMAND  0x112
	#Define WM_LBUTTONUP   0x202
	#Define MOUSE_MOVE     0xf012

	** ���Ϳ�����֧�ֵ�COM_Attrib��־����
	#Define COMATTRIB_RESTRICTED	0x100000			&& ��Ӧ�Ӻ����Է�������/������
	#Define COMATTRIB_HIDDEN		0x40		&& ��Ӧ���û���ʾ����/�����������������ҿɰ󶨡�
	#Define COMATTRIB_NONBROWSABLE	0x400		&& ����/������ʾ�ڶ���������У�������ʾ������������С�
	#Define COMATTRIB_READONLY		0x100000	&& ��������ֻ���ģ���������Properties����
	#Define COMATTRIB_WRITEONLY		0x200000	&& ��������ֻд�ģ���������Properties����

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
