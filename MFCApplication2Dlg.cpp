
// MFCApplication2Dlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication2.h"
#include "MFCApplication2Dlg.h"
#include "afxdialogex.h"
#include <stack>
#include <string>
#include <stdexcept>
#include <cctype>
#include<cmath>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include <string>


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonClear();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

void CAboutDlg::OnBnClickedButtonClear()
{
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON17, &CAboutDlg::OnBnClickedButtonClear)
END_MESSAGE_MAP()


// CMFCApplication2Dlg 对话框



CMFCApplication2Dlg::CMFCApplication2Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION2_DIALOG, pParent)
	, value(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	operation = 0;
}

void CMFCApplication2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, edit);
	DDX_Text(pDX, IDC_EDIT1, value);
}

BEGIN_MESSAGE_MAP(CMFCApplication2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication2Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication2Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication2Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication2Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication2Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication2Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication2Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication2Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication2Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication2Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication2Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplication2Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication2Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication2Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication2Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication2Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCApplication2Dlg::OnBnClickedButtonClear)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFCApplication2Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCApplication2Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCApplication2Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON21, &CMFCApplication2Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CMFCApplication2Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CMFCApplication2Dlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CMFCApplication2Dlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CMFCApplication2Dlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON_SIN, &CMFCApplication2Dlg::OnBnClickedButtonSin)
	ON_BN_CLICKED(IDC_BUTTON_COS, &CMFCApplication2Dlg::OnBnClickedButtonCos)
	ON_BN_CLICKED(IDC_BUTTON_TAN, &CMFCApplication2Dlg::OnBnClickedButtonTan)
	ON_BN_CLICKED(IDC_BUTTON_ARCSIN, &CMFCApplication2Dlg::OnBnClickedButtonArcsin)
	ON_BN_CLICKED(IDC_BUTTON_ARCCOS, &CMFCApplication2Dlg::OnBnClickedButtonArccos)
	ON_BN_CLICKED(IDC_BUTTON_ARCTAN, &CMFCApplication2Dlg::OnBnClickedButtonArctan)
	ON_BN_CLICKED(IDC_BUTTON_P, &CMFCApplication2Dlg::OnBnClickedButtonP)
	ON_BN_CLICKED(IDC_BUTTON_E, &CMFCApplication2Dlg::OnBnClickedButtonE)
	ON_BN_CLICKED(IDC_BUTTON_Factorial, &CMFCApplication2Dlg::OnBnClickedButtonFactorial)
	ON_BN_CLICKED(IDC_BUTTON_LN, &CMFCApplication2Dlg::OnBnClickedButtonLn)
	ON_BN_CLICKED(IDC_BUTTON_Power, &CMFCApplication2Dlg::OnBnClickedButtonPower)
	ON_BN_CLICKED(IDC_BUTTON_LOG, &CMFCApplication2Dlg::OnBnClickedButtonLog)
	ON_BN_CLICKED(IDC_BUTTON_Radical, &CMFCApplication2Dlg::OnBnClickedButtonRadical)
	ON_BN_CLICKED(IDC_BUTTON_EXIT, &CMFCApplication2Dlg::OnBnClickedButtonExit)
END_MESSAGE_MAP()


// CMFCApplication2Dlg 消息处理程序

BOOL CMFCApplication2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	SetWindowText(_T("我的计算器"));	

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	// 默认隐藏所有科学型的额外控件
	GetDlgItem(IDC_BUTTON_SIN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_COS)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_TAN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_ARCTAN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_ARCSIN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_ARCCOS)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_LN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_LOG)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_Radical)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_E)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_Factorial)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_P)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_Power)->ShowWindow(SW_HIDE);
	// ... 其他额外的科学型控件

	
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCApplication2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCApplication2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
	

}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCApplication2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication2Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '1';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '2';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '3';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '4';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '5';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '6';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '7';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '8';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '9';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '0';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '.';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '+';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '-';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '*';
	UpdateData(false);
}


void CMFCApplication2Dlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '/';
	UpdateData(false);
}
CString FormatDoubleWithPrecision(double number, int maxPrecision)
{
	CString str;
	str.Format(_T("%.*f"), maxPrecision, number);

	// 删除多余的0
	while (str.Right(1) == _T("0"))
	{
		str = str.Left(str.GetLength() - 1);
	}

	// 如果末尾是小数点，则也删除
	if (str.Right(1) == _T("."))
	{
		str = str.Left(str.GetLength() - 1);
	}

	return str;
}

double evaluateExpression(const std::string& expression) {
	std::stack<double> operands;  // 存储操作数的栈
	std::stack<char> operators;   // 存储运算符的栈

	// 一个lambda函数，用于执行栈顶的运算，并将结果压回栈
	auto applyOperator = [](std::stack<double>& operands, char op) {
		double right = operands.top(); operands.pop(); // 取出右操作数
		double left = operands.top(); operands.pop();  // 取出左操作数

		switch (op) {
		case '+': operands.push(left + right); break;
		case '-': operands.push(left - right); break;
		case '*': operands.push(left * right); break;
		case '/':
			if (right == 0) throw std::runtime_error("除数不能为0，请修改除数");
			operands.push(left / right);
			break;
		default: throw std::runtime_error("未知运算符，请检查运算符");
		case '^':operands.push(pow(left, right)); break;
		case'L':
			if (left == 1 || left < 0 || right == 0)throw std::runtime_error("底数不能为0或1，真数不能为0");

			operands.push(log(right) / log(left)); break;
		case'R':
			if (fmod(right, 2) == 0 && left < 0)throw std::runtime_error("负数没有偶次方根");
			operands.push(pow(left, 1.0 / right)); break;
		}
	};

	std::string number; // 用于暂存数字字符串的变量
	for (char ch : expression) {
		if (std::isdigit(ch) || ch == '.') {
			number += ch;  // 是数字或小数点，追加到number字符串
		}
		else {
			if (!number.empty()) {
				operands.push(std::stod(number));  // 转换number为double并压入栈
				number.clear();  // 清空number以便下次使用
			}

			if (ch == '+' || ch == '-' || ch == '*' || ch == '/'||ch=='^'||ch=='L'||ch=='R') {
				// 当前字符是运算符
				// 运算符的优先级检查并执行运算
				while (!operators.empty() && operators.top() != '(' &&
					(ch == '+' || ch == '-')) {
					applyOperator(operands, operators.top());
					operators.pop();
				}
				operators.push(ch);  // 将当前运算符压入栈
			}
			else if (ch == '(') {
				operators.push(ch);  // 左括号压入栈
			}
			else if (ch == ')') {
				// 执行括号内的所有运算
				while (!operators.empty() && operators.top() != '(') {
					applyOperator(operands, operators.top());
					operators.pop();
				}
				if (operators.empty()) {
					throw std::runtime_error("Mismatched parentheses");
				}
				operators.pop(); // 弹出左括号
			}
		}
	}

	// 处理可能的最后一个数字
	if (!number.empty()) {
		operands.push(std::stod(number));
	}

	// 执行剩下的所有运算
	while (!operators.empty()) {
		applyOperator(operands, operators.top());
		operators.pop();
	}

	return operands.top(); // 栈顶即为最后的运算结果
}


void CMFCApplication2Dlg::OnBnClickedButton12()
{
		UpdateData(TRUE); // 获取最新的value值

		std::string expression(CW2A(value.GetString())); // 这里进行转换

		try {
			double result = evaluateExpression(expression);
			value = FormatDoubleWithPrecision(result, 10);
		}
		catch (const std::runtime_error& e) {
			// Handle error, e.g., show a message box
			MessageBox(CString(e.what()), _T("Error"), MB_OK | MB_ICONERROR);
		}
		UpdateData(FALSE); // 更新UI
	}

void CMFCApplication2Dlg::OnBnClickedButtonClear()
{
	// TODO: 在此添加控件通知处理程序代码

	value = _T("");

	// 如果有其他状态也需要清除，比如内部变量或者显示的历史记录等，也在这里清除。

	UpdateData(FALSE); // 更新UI以反映变更
}


void CMFCApplication2Dlg::OnBnClickedButton20()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '0';
	value += '0';
	UpdateData(0);
}


void CMFCApplication2Dlg::OnBnClickedButton18()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE); // 获取最新的value值

	double number = _tstof(value); // 将CString转换为浮点数

	if (number < 0) {
		// 错误处理：负数没有实数平方根
		MessageBox(_T("负数没有实数平方根"), _T("Error"), MB_OK | MB_ICONERROR);
		return;
	}

	double result = sqrt(number);

	value = FormatDoubleWithPrecision(result, 10);

	UpdateData(FALSE); // 更新UI
}


void CMFCApplication2Dlg::OnBnClickedButton19()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	double number = _tstof(value);
	if (number ==0) {
		MessageBox(_T("分母不能为0"), _T("Error"), MB_OK | MB_ICONERROR);
		return;
	}
	double result = 1 / number;
	value = FormatDoubleWithPrecision(result, 10);
	UpdateData(0);


}


void CMFCApplication2Dlg::OnBnClickedButton21()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);  // 获取最新的value值（假设value是一个CString变量）

	if (!value.IsEmpty()) {
		value = value.Left(value.GetLength() - 1);  // 删除最后一个字符
		if (value.IsEmpty()) {
			value = _T("");  // 如果删除后为空，则重置为"0"
		}
	}
	else {
		value = _T("");  // 如果已经是空的，则设置为"0"
	}

	UpdateData(FALSE);  // 更新UI以反映这个变更
}


void CMFCApplication2Dlg::OnBnClickedButton22()
{
	// TODO: 在此添加控件通知处理程序代码
	// 显示所有科学型的额外控件
	GetDlgItem(IDC_BUTTON_SIN)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_COS)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_TAN)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_ARCTAN)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_ARCSIN)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_ARCCOS)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_LN)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_LOG)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_Radical)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_E)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_Factorial)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_P)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON_Power)->ShowWindow(SW_SHOW);
}


void CMFCApplication2Dlg::OnBnClickedButton23()
{
	// TODO: 在此添加控件通知处理程序代码
	// 隐藏所有科学型的额外控件
	GetDlgItem(IDC_BUTTON_SIN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_COS)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_TAN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_ARCTAN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_ARCSIN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_ARCCOS)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_LN)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_LOG)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_Radical)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_E)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_Factorial)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_P)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_BUTTON_Power)->ShowWindow(SW_HIDE);
	// ... 其他额外的科学型控件
}



void CMFCApplication2Dlg::OnBnClickedButton24()
{
	// TODO: 在此添加控件通知处理程序代码
	value += '(';
	UpdateData(0);
}


void CMFCApplication2Dlg::OnBnClickedButton25()
{
	// TODO: 在此添加控件通知处理程序代码
	value += ')';
	UpdateData(0);

}


void CMFCApplication2Dlg::OnBnClickedButtonSin()
{
	UpdateData(1);
	double number = _tstof(value);
	double result = sin(number);
	value = FormatDoubleWithPrecision(result, 10);
	UpdateData(0);

}


void CMFCApplication2Dlg::OnBnClickedButtonCos()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(1);
	double number = _tstof(value);
	double result = cos(number);
	value = FormatDoubleWithPrecision(result, 10);
	UpdateData(0);
}



void CMFCApplication2Dlg::OnBnClickedButtonTan()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(1);
	double number = _tstof(value);
	double result = tan(number);
	value = FormatDoubleWithPrecision(result, 10);
	UpdateData(0);
}


void CMFCApplication2Dlg::OnBnClickedButtonArcsin()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(1);
	double number = _tstof(value);
	if (number >= -1 && number <= 1) {
		double result = asin(number);
		value = FormatDoubleWithPrecision(result, 10);
	}
	else {
	MessageBox(_T("不能是大于1或小于-1的数"), _T("Error"), MB_OK | MB_ICONERROR);
	return;
		 }
	
	UpdateData(0);
}


void CMFCApplication2Dlg::OnBnClickedButtonArccos()
{
	// TODO: 在此添加控件通知处理程序代码
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(1);
	double number = _tstof(value);
	if (number >= -1 && number <= 1) {
		double result = acos(number);
		value = FormatDoubleWithPrecision(result, 10);
	}
	else {
		MessageBox(_T("不能是大于1或小于-1的数"), _T("Error"), MB_OK | MB_ICONERROR);
		return;
	}

	UpdateData(0);
}


void CMFCApplication2Dlg::OnBnClickedButtonArctan()
{
	// TODO: 在此添加控件通知处理程序代码
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(1);
	double number = _tstof(value);
	double result = atan(number);
	value = FormatDoubleWithPrecision(result, 10);
	UpdateData(0);
}


void CMFCApplication2Dlg::OnBnClickedButtonP()
{
	// TODO: 在此添加控件通知处理程序代码
	value += _T("3.1415926535");
	UpdateData(0);
}


void CMFCApplication2Dlg::OnBnClickedButtonE()
{
	// TODO: 在此添加控件通知处理程序代码
	value += _T("2.7182818284");
	UpdateData(0);
}

void CMFCApplication2Dlg::OnBnClickedButtonFactorial()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	double number = _wtof(value);
	double result = tgamma(number+1);
	value = FormatDoubleWithPrecision(result,10 );
	UpdateData(FALSE);
}


void CMFCApplication2Dlg::OnBnClickedButtonLn()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	double number = _tstof(value);
	double result = log(number);
	value = FormatDoubleWithPrecision(result, 10);
	UpdateData(FALSE);
}


void CMFCApplication2Dlg::OnBnClickedButtonPower()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE); // 从界面获取数据
	tempValue = value; // 存储第一个操作数
	value += '^';  // 
	operation = '^';   // 设置待执行的运算为幂运算
	UpdateData(FALSE); // 更新界面
}


void CMFCApplication2Dlg::OnBnClickedButtonLog()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);  // 从界面获取数据
	tempValue = value; // 存储底数
	value += 'L';
	operation = 'L';   // 设置待执行的运算为任意底数对数运算
	UpdateData(FALSE); // 更新界面
}


void CMFCApplication2Dlg::OnBnClickedButtonRadical()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);  // 从界面获取数据
	tempValue = value; // 存储底数
	value += 'R';
	operation = 'R';   // 设置待执行的运算为任意底数对数运算
	UpdateData(FALSE); // 更新界面

}


void CMFCApplication2Dlg::OnBnClickedButtonExit()
{
	// TODO: 在此添加控件通知处理程序代码
	EndDialog(IDOK);  // 关闭对话框，并返回IDOK
}
