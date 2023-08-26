/***************************************************************
 * Name:      CS1231Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    Mark ()
 * Created:   2020-10-07
 * Copyright: Mark ()
 * License:
 **************************************************************/

#include "CS1231Main.h"
#include "wx/msgdlg.h"

//(*InternalHeaders(CS1231Frame)
#include "wx/intl.h"
#include "wx/string.h"
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(CS1231Frame)
const int CS1231Frame::ID_LOGICTEXTCTRL = wxNewId();
const int CS1231Frame::ID_ANDBTN = wxNewId();
const int CS1231Frame::ID_ORBTN = wxNewId();
const int CS1231Frame::ID_COMPUTEBTN = wxNewId();
const int CS1231Frame::ID_EQUATIONRICHTEXTCTRL = wxNewId();
const int CS1231Frame::ID_NEGATEBTN = wxNewId();
const int CS1231Frame::ID_IMPLYBTN = wxNewId();
const int CS1231Frame::ID_CLEARBTN = wxNewId();
const int CS1231Frame::ID_LOGICGRID = wxNewId();
const int CS1231Frame::ID_LOGICPANEL = wxNewId();
const int CS1231Frame::ID_INPUTTEXTCTRL = wxNewId();
const int CS1231Frame::ID_CONVERTBTN = wxNewId();
const int CS1231Frame::ID_OUTPUTBASETEXTCTRL = wxNewId();
const int CS1231Frame::ID_BASETEXTCTRL = wxNewId();
const int CS1231Frame::ID_INPUTFACTORISETEXTCTRL = wxNewId();
const int CS1231Frame::ID_FACTORISEBTN = wxNewId();
const int CS1231Frame::ID_OUTPUTFACTORISETEXTCTRL = wxNewId();
const int CS1231Frame::ID_INPUT2FACTORISETEXTCTRL = wxNewId();
const int CS1231Frame::ID_LCMBTN = wxNewId();
const int CS1231Frame::ID_GCFBTN = wxNewId();
const int CS1231Frame::ID_OUTPUT2FACOTRISETEXTCTRL = wxNewId();
const int CS1231Frame::ID_SWAPBTN = wxNewId();
const int CS1231Frame::ID_EUCLIDEANRICHTEXTCTRL = wxNewId();
const int CS1231Frame::ID_EUCLIDEANLBL = wxNewId();
const int CS1231Frame::ID_EUCLIDEANBTN = wxNewId();
const int CS1231Frame::ID_EXPRESSIONTEXTCTRL = wxNewId();
const int CS1231Frame::ID_EVALUATEBTN = wxNewId();
const int CS1231Frame::ID_EXPRESSIONRICHTEXTCTRL = wxNewId();
const int CS1231Frame::ID_MODULUSTEXTCTRL = wxNewId();
const int CS1231Frame::ID_MODULUSLBL = wxNewId();
const int CS1231Frame::ID_EXPRESSION2TEXTCTRL = wxNewId();
const int CS1231Frame::ID_EQUIVALENTLBL = wxNewId();
const int CS1231Frame::ID_PANEL2 = wxNewId();
const int CS1231Frame::ID_GRAPHTEXTCTRL = wxNewId();
const int CS1231Frame::ID_GRAPHMATHPLOT = wxNewId();
const int CS1231Frame::ID_PLOTBTN = wxNewId();
const int CS1231Frame::ID_RANGEXLBL = wxNewId();
const int CS1231Frame::ID_RANGEXTEXTCTRL = wxNewId();
const int CS1231Frame::ID_XINTEGERCHKBOX = wxNewId();
const int CS1231Frame::ID_NOOFPOINTSLBL = wxNewId();
const int CS1231Frame::ID_NOOFPOINTSTEXTCTRL = wxNewId();
const int CS1231Frame::ID_OPERATORSLBL = wxNewId();
const int CS1231Frame::ID_FUNCTIONLBL = wxNewId();
const int CS1231Frame::ID_TRIGOLBL = wxNewId();
const int CS1231Frame::ID_INEQUALITYLBL = wxNewId();
const int CS1231Frame::ID_LOGICALLBL = wxNewId();
const int CS1231Frame::ID_EXAMPLESLBL = wxNewId();
const int CS1231Frame::ID_FIBONNACCIBTN = wxNewId();
const int CS1231Frame::ID_PIECEWISEBTN = wxNewId();
const int CS1231Frame::ID_POLYNOMIALBTN = wxNewId();
const int CS1231Frame::ID_FLOORBTN = wxNewId();
const int CS1231Frame::ID_GRAPHPANEL = wxNewId();
const int CS1231Frame::ID_INORDERTEXTCTRL = wxNewId();
const int CS1231Frame::ID_POSTORDERTEXTCTRL = wxNewId();
const int CS1231Frame::ID_PREORDERTEXTCTRL = wxNewId();
const int CS1231Frame::ID_PREORDERLBL = wxNewId();
const int CS1231Frame::ID_INORDERLBL = wxNewId();
const int CS1231Frame::ID_POSTORDERLBL = wxNewId();
const int CS1231Frame::ID_COMPUTEORDERBTN = wxNewId();
const int CS1231Frame::ID_TREERICHTEXTCTRL = wxNewId();
const int CS1231Frame::ID_TREEPANEL = wxNewId();
const int CS1231Frame::ID_MATRIXGRID = wxNewId();
const int CS1231Frame::ID_DETERMINANTBTN = wxNewId();
const int CS1231Frame::ID_DETERMINANTTEXTCTRL = wxNewId();
const int CS1231Frame::ID_ROWSLBL = wxNewId();
const int CS1231Frame::ID_ROWSTEXTCTRL = wxNewId();
const int CS1231Frame::ID_SETGRIDBTN = wxNewId();
const int CS1231Frame::ID_ROUTESBTN = wxNewId();
const int CS1231Frame::ID_ROUTESRICHTEXTCTRL = wxNewId();
const int CS1231Frame::ID_ROUTESTEXTCTRL = wxNewId();
const int CS1231Frame::ID_LENGTHLBL = wxNewId();
const int CS1231Frame::ID_FROMLBL = wxNewId();
const int CS1231Frame::ID_TOLBL = wxNewId();
const int CS1231Frame::ID_FROMTEXTCTRL = wxNewId();
const int CS1231Frame::ID_TOTEXTCTRL = wxNewId();
const int CS1231Frame::ID_ROUTESRADIOBOX = wxNewId();
const int CS1231Frame::ID_CLEARMATRIXBTN = wxNewId();
const int CS1231Frame::ID_MAKESYMMETRICBTN = wxNewId();
const int CS1231Frame::ID_LABELSBTN = wxNewId();
const int CS1231Frame::ID_STATICTEXT1 = wxNewId();
const int CS1231Frame::ID_LABELSTEXTCTRL = wxNewId();
const int CS1231Frame::ID_FILLEMPTYBTN = wxNewId();
const int CS1231Frame::ID_GRAPH2PANEL = wxNewId();
const int CS1231Frame::ID_NOTEBOOK = wxNewId();
const int CS1231Frame::idMenuQuit = wxNewId();
const int CS1231Frame::idMenuAbout = wxNewId();
const int CS1231Frame::ID_MAINSTATUSBAR = wxNewId();
//*)

BEGIN_EVENT_TABLE(CS1231Frame,wxFrame)
    //(*EventTable(CS1231Frame)
    //*)
END_EVENT_TABLE()

CS1231Frame::CS1231Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(CS1231Frame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(894,463));
    Notebook = new wxNotebook(this, ID_NOTEBOOK, wxPoint(0,8), wxSize(832,450), 0, _T("ID_NOTEBOOK"));
    LogicPanel = new wxPanel(Notebook, ID_LOGICPANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_LOGICPANEL"));
    LogicTextCtrl = new wxTextCtrl(LogicPanel, ID_LOGICTEXTCTRL, wxEmptyString, wxPoint(16,40), wxSize(336,24), 0, wxDefaultValidator, _T("ID_LOGICTEXTCTRL"));
    AndBtn = new wxButton(LogicPanel, ID_ANDBTN, _("∧"), wxPoint(16,8), wxSize(64,23), 0, wxDefaultValidator, _T("ID_ANDBTN"));
    OrBtn = new wxButton(LogicPanel, ID_ORBTN, _("∨"), wxPoint(88,8), wxSize(64,23), 0, wxDefaultValidator, _T("ID_ORBTN"));
    ComputeBtn = new wxButton(LogicPanel, ID_COMPUTEBTN, _("Compute"), wxPoint(16,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_COMPUTEBTN"));
    EquationRichTextCtrl = new wxRichTextCtrl(LogicPanel, ID_EQUATIONRICHTEXTCTRL, wxEmptyString, wxPoint(16,104), wxSize(336,280), wxRE_MULTILINE|wxRE_READONLY, wxDefaultValidator, _T("ID_EQUATIONRICHTEXTCTRL"));
    wxRichTextAttr rchtxtAttr_1;
    rchtxtAttr_1.SetBulletStyle(wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT);
    NegateBtn = new wxButton(LogicPanel, ID_NEGATEBTN, _("~"), wxPoint(160,8), wxSize(64,23), 0, wxDefaultValidator, _T("ID_NEGATEBTN"));
    ImplyBtn = new wxButton(LogicPanel, ID_IMPLYBTN, _("→"), wxPoint(232,8), wxSize(64,23), 0, wxDefaultValidator, _T("ID_IMPLYBTN"));
    ClearBtn = new wxButton(LogicPanel, ID_CLEARBTN, _("Clear"), wxPoint(272,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CLEARBTN"));
    LogicGrid = new wxGrid(LogicPanel, ID_LOGICGRID, wxPoint(360,16), wxSize(512,368), 0, _T("ID_LOGICGRID"));
    LogicGrid->CreateGrid(8,4);
    LogicGrid->EnableEditing(true);
    LogicGrid->EnableGridLines(true);
    LogicGrid->SetDefaultCellFont( LogicGrid->GetFont() );
    LogicGrid->SetDefaultCellTextColour( LogicGrid->GetForegroundColour() );
    ModuloPanel = new wxPanel(Notebook, ID_PANEL2, wxDefaultPosition, wxSize(478,420), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    InputBaseTextCtrl = new wxTextCtrl(ModuloPanel, ID_INPUTTEXTCTRL, wxEmptyString, wxPoint(8,8), wxSize(160,21), 0, wxDefaultValidator, _T("ID_INPUTTEXTCTRL"));
    ConvertBtn = new wxButton(ModuloPanel, ID_CONVERTBTN, _("Convert"), wxPoint(176,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CONVERTBTN"));
    OutputBaseTextCtrl = new wxTextCtrl(ModuloPanel, ID_OUTPUTBASETEXTCTRL, wxEmptyString, wxPoint(264,8), wxSize(160,21), 0, wxDefaultValidator, _T("ID_OUTPUTBASETEXTCTRL"));
    BaseTextCtrl = new wxTextCtrl(ModuloPanel, ID_BASETEXTCTRL, _("10,2"), wxPoint(168,40), wxSize(96,21), 0, wxDefaultValidator, _T("ID_BASETEXTCTRL"));
    InputFactoriseTextCtrl = new wxTextCtrl(ModuloPanel, ID_INPUTFACTORISETEXTCTRL, wxEmptyString, wxPoint(8,72), wxSize(160,21), 0, wxDefaultValidator, _T("ID_INPUTFACTORISETEXTCTRL"));
    FactoriseBtn = new wxButton(ModuloPanel, ID_FACTORISEBTN, _("Factorise"), wxPoint(176,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_FACTORISEBTN"));
    OutputFactoriseTextCtrl = new wxTextCtrl(ModuloPanel, ID_OUTPUTFACTORISETEXTCTRL, wxEmptyString, wxPoint(264,72), wxSize(160,32), 0, wxDefaultValidator, _T("ID_OUTPUTFACTORISETEXTCTRL"));
    Input2FactoriseTextCtrl = new wxTextCtrl(ModuloPanel, ID_INPUT2FACTORISETEXTCTRL, wxEmptyString, wxPoint(8,118), wxSize(160,21), 0, wxDefaultValidator, _T("ID_INPUT2FACTORISETEXTCTRL"));
    LCMBtn = new wxButton(ModuloPanel, ID_LCMBTN, _("LCM"), wxPoint(176,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_LCMBTN"));
    GCDBtn = new wxButton(ModuloPanel, ID_GCFBTN, _("GCD"), wxPoint(176,128), wxDefaultSize, 0, wxDefaultValidator, _T("ID_GCFBTN"));
    Output2FactoriseTextCtrl = new wxTextCtrl(ModuloPanel, ID_OUTPUT2FACOTRISETEXTCTRL, wxEmptyString, wxPoint(264,112), wxSize(160,32), 0, wxDefaultValidator, _T("ID_OUTPUT2FACOTRISETEXTCTRL"));
    SwapBtn = new wxButton(ModuloPanel, ID_SWAPBTN, _("Swap"), wxPoint(48,94), wxDefaultSize, 0, wxDefaultValidator, _T("ID_SWAPBTN"));
    EuclideanRichTextCtrl = new wxRichTextCtrl(ModuloPanel, ID_EUCLIDEANRICHTEXTCTRL, wxEmptyString, wxPoint(8,176), wxSize(240,216), wxRE_MULTILINE|wxRE_READONLY, wxDefaultValidator, _T("ID_EUCLIDEANRICHTEXTCTRL"));
    wxRichTextAttr rchtxtAttr_2;
    rchtxtAttr_2.SetBulletStyle(wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT);
    EuclideanLbl = new wxStaticText(ModuloPanel, ID_EUCLIDEANLBL, _("Euclidean Algorithm"), wxPoint(8,160), wxDefaultSize, 0, _T("ID_EUCLIDEANLBL"));
    GCDEuclideanBtn = new wxButton(ModuloPanel, ID_EUCLIDEANBTN, _("GCD (Euclidean)"), wxPoint(140,152), wxSize(120,23), 0, wxDefaultValidator, _T("ID_EUCLIDEANBTN"));
    ExpressionTextCtrl = new wxTextCtrl(ModuloPanel, ID_EXPRESSIONTEXTCTRL, wxEmptyString, wxPoint(440,8), wxSize(120,21), 0, wxDefaultValidator, _T("ID_EXPRESSIONTEXTCTRL"));
    EvaluateBtn = new wxButton(ModuloPanel, ID_EVALUATEBTN, _("Evaluate"), wxPoint(440,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_EVALUATEBTN"));
    ExpressionRichTextCtrl = new wxRichTextCtrl(ModuloPanel, ID_EXPRESSIONRICHTEXTCTRL, wxEmptyString, wxPoint(440,56), wxSize(264,336), wxRE_MULTILINE, wxDefaultValidator, _T("ID_EXPRESSIONRICHTEXTCTRL"));
    wxRichTextAttr rchtxtAttr_3;
    rchtxtAttr_3.SetBulletStyle(wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT);
    ModulusTextCtrl = new wxTextCtrl(ModuloPanel, ID_MODULUSTEXTCTRL, wxEmptyString, wxPoint(592,32), wxSize(96,21), 0, wxDefaultValidator, _T("ID_MODULUSTEXTCTRL"));
    ModulusLbl = new wxStaticText(ModuloPanel, ID_MODULUSLBL, _("mod"), wxPoint(565,35), wxSize(26,16), 0, _T("ID_MODULUSLBL"));
    Expression2TextCtrl = new wxTextCtrl(ModuloPanel, ID_EXPRESSION2TEXTCTRL, wxEmptyString, wxPoint(592,8), wxSize(112,21), 0, wxDefaultValidator, _T("ID_EXPRESSION2TEXTCTRL"));
    EquivalentLbl = new wxStaticText(ModuloPanel, ID_EQUIVALENTLBL, _("≡"), wxPoint(568,10), wxDefaultSize, 0, _T("ID_EQUIVALENTLBL"));
    GraphPanel = new wxPanel(Notebook, ID_GRAPHPANEL, wxPoint(4,67), wxSize(721,379), wxTAB_TRAVERSAL, _T("ID_GRAPHPANEL"));
    GraphTextCtrl = new wxTextCtrl(GraphPanel, ID_GRAPHTEXTCTRL, wxEmptyString, wxPoint(8,8), wxSize(200,304), wxTE_MULTILINE, wxDefaultValidator, _T("ID_GRAPHTEXTCTRL"));
    GraphMathPlot = new mpWindow(GraphPanel, ID_GRAPHMATHPLOT, wxPoint(216,104), wxSize(664,264), wxRAISED_BORDER|wxTAB_TRAVERSAL);
    GraphMathPlot->Disable();
    GraphMathPlot->UpdateAll();
    GraphMathPlot->Fit();
    PlotBtn = new wxButton(GraphPanel, ID_PLOTBTN, _("Plot"), wxPoint(216,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_PLOTBTN"));
    RangeXLbl = new wxStaticText(GraphPanel, ID_RANGEXLBL, _("Min x, Max x"), wxPoint(328,14), wxDefaultSize, 0, _T("ID_RANGEXLBL"));
    RangeXTextCtrl = new wxTextCtrl(GraphPanel, ID_RANGEXTEXTCTRL, _("0,10"), wxPoint(410,10), wxSize(88,21), 0, wxDefaultValidator, _T("ID_RANGEXTEXTCTRL"));
    XIntegerChkBox = new wxCheckBox(GraphPanel, ID_XINTEGERCHKBOX, _("x is an integer"), wxPoint(512,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_XINTEGERCHKBOX"));
    XIntegerChkBox->SetValue(false);
    NoOfPointsLbl = new wxStaticText(GraphPanel, ID_NOOFPOINTSLBL, _("No. of points (only for continuous plot)"), wxPoint(328,36), wxDefaultSize, 0, _T("ID_NOOFPOINTSLBL"));
    NoOfPointsTextCtrl = new wxTextCtrl(GraphPanel, ID_NOOFPOINTSTEXTCTRL, _("1000"), wxPoint(565,32), wxSize(80,21), 0, wxDefaultValidator, _T("ID_NOOFPOINTSTEXTCTRL"));
    OperatorsLbl = new wxStaticText(GraphPanel, ID_OPERATORSLBL, _("(+, -, *, /, %, ^)"), wxPoint(384,88), wxDefaultSize, 0, _T("ID_OPERATORSLBL"));
    FunctionLbl = new wxStaticText(GraphPanel, ID_FUNCTIONLBL, _("(min, max, avg, sum, abs, ceil, floor, round, roundn, exp, log, log10, logn, root, sqrt, clamp, inrange)"), wxPoint(216,56), wxDefaultSize, 0, _T("ID_FUNCTIONLBL"));
    TrigoLbl = new wxStaticText(GraphPanel, ID_TRIGOLBL, _("(sin, cos, tan, acos, asin, atan, atan2, cosh, cot, csc, sec, sinh, tanh, d2r, r2d, d2g, g2d, hypot)"), wxPoint(216,72), wxDefaultSize, 0, _T("ID_TRIGOLBL"));
    InequalityLbl = new wxStaticText(GraphPanel, ID_INEQUALITYLBL, _("(=, ==, <>, !=, <, <=, >, >=)"), wxPoint(216,88), wxDefaultSize, 0, _T("ID_INEQUALITYLBL"));
    LogicalLbl = new wxStaticText(GraphPanel, ID_LOGICALLBL, _("(and, nand, nor, not, or, xor, xnor, mand, mor)"), wxPoint(480,88), wxDefaultSize, 0, _T("ID_LOGICALLBL"));
    ExamplesLbl = new wxStaticText(GraphPanel, ID_EXAMPLESLBL, _("Examples"), wxPoint(8,312), wxDefaultSize, 0, _T("ID_EXAMPLESLBL"));
    FibonnacciBtn = new wxButton(GraphPanel, ID_FIBONNACCIBTN, _("Fibonnacci"), wxPoint(8,328), wxSize(80,23), 0, wxDefaultValidator, _T("ID_FIBONNACCIBTN"));
    PiecewiseBtn = new wxButton(GraphPanel, ID_PIECEWISEBTN, _("Piecewise"), wxPoint(8,352), wxSize(80,23), 0, wxDefaultValidator, _T("ID_PIECEWISEBTN"));
    PolynomialBtn = new wxButton(GraphPanel, ID_POLYNOMIALBTN, _("Polynomial"), wxPoint(104,328), wxSize(88,23), 0, wxDefaultValidator, _T("ID_POLYNOMIALBTN"));
    FloorBtn = new wxButton(GraphPanel, ID_FLOORBTN, _("Floor"), wxPoint(104,352), wxSize(88,23), 0, wxDefaultValidator, _T("ID_FLOORBTN"));
    TreePanel = new wxPanel(Notebook, ID_TREEPANEL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_TREEPANEL"));
    InOrderTextCtrl = new wxTextCtrl(TreePanel, ID_INORDERTEXTCTRL, wxEmptyString, wxPoint(96,40), wxSize(176,21), 0, wxDefaultValidator, _T("ID_INORDERTEXTCTRL"));
    PostOrderTextCtrl = new wxTextCtrl(TreePanel, ID_POSTORDERTEXTCTRL, wxEmptyString, wxPoint(96,64), wxSize(176,21), 0, wxDefaultValidator, _T("ID_POSTORDERTEXTCTRL"));
    PreOrderTextCtrl = new wxTextCtrl(TreePanel, ID_PREORDERTEXTCTRL, wxEmptyString, wxPoint(96,16), wxSize(176,21), 0, wxDefaultValidator, _T("ID_PREORDERTEXTCTRL"));
    PreorderLbl = new wxStaticText(TreePanel, ID_PREORDERLBL, _("Pre-order"), wxPoint(32,24), wxDefaultSize, 0, _T("ID_PREORDERLBL"));
    InOrderLbl = new wxStaticText(TreePanel, ID_INORDERLBL, _("In-order"), wxPoint(42,44), wxSize(38,16), 0, _T("ID_INORDERLBL"));
    PostOrderLbl = new wxStaticText(TreePanel, ID_POSTORDERLBL, _("Post-order"), wxPoint(26,64), wxDefaultSize, 0, _T("ID_POSTORDERLBL"));
    ComputeOrderBtn = new wxButton(TreePanel, ID_COMPUTEORDERBTN, _("Compute"), wxPoint(96,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_COMPUTEORDERBTN"));
    TreeRichTextCtrl = new wxRichTextCtrl(TreePanel, ID_TREERICHTEXTCTRL, wxEmptyString, wxPoint(16,120), wxSize(808,272), wxRE_MULTILINE, wxDefaultValidator, _T("ID_TREERICHTEXTCTRL"));
    wxRichTextAttr rchtxtAttr_4;
    rchtxtAttr_4.SetBulletStyle(wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT);
    Graph2Panel = new wxPanel(Notebook, ID_GRAPH2PANEL, wxDefaultPosition, wxSize(886,440), wxTAB_TRAVERSAL, _T("ID_GRAPH2PANEL"));
    MatrixGrid = new wxGrid(Graph2Panel, ID_MATRIXGRID, wxPoint(8,16), wxSize(424,192), 0, _T("ID_MATRIXGRID"));
    MatrixGrid->CreateGrid(4,4);
    MatrixGrid->EnableEditing(true);
    MatrixGrid->EnableGridLines(true);
    MatrixGrid->SetDefaultColSize(50, true);
    MatrixGrid->SetColLabelValue(0, _("A"));
    MatrixGrid->SetColLabelValue(1, _("B"));
    MatrixGrid->SetColLabelValue(2, _("C"));
    MatrixGrid->SetColLabelValue(3, _("D"));
    MatrixGrid->SetRowLabelValue(0, _("A"));
    MatrixGrid->SetRowLabelValue(1, _("B"));
    MatrixGrid->SetRowLabelValue(2, _("C"));
    MatrixGrid->SetRowLabelValue(3, _("D"));
    MatrixGrid->SetDefaultCellFont( MatrixGrid->GetFont() );
    MatrixGrid->SetDefaultCellTextColour( MatrixGrid->GetForegroundColour() );
    DeterminantBtn = new wxButton(Graph2Panel, ID_DETERMINANTBTN, _("Compute determinant"), wxPoint(8,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_DETERMINANTBTN"));
    DeterminantTextCtrl = new wxTextCtrl(Graph2Panel, ID_DETERMINANTTEXTCTRL, wxEmptyString, wxPoint(8,248), wxSize(120,21), 0, wxDefaultValidator, _T("ID_DETERMINANTTEXTCTRL"));
    RowsLbl = new wxStaticText(Graph2Panel, ID_ROWSLBL, _("No. of rows/columns"), wxPoint(160,220), wxDefaultSize, 0, _T("ID_ROWSLBL"));
    RowsLbl->Hide();
    RowsTextCtrl = new wxTextCtrl(Graph2Panel, ID_ROWSTEXTCTRL, wxEmptyString, wxPoint(280,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_ROWSTEXTCTRL"));
    RowsTextCtrl->Disable();
    RowsTextCtrl->Hide();
    RowsTextCtrl->SetToolTip(_("Accepts only a integer, matrix is restricted to square matrix"));
    SetGridBtn = new wxButton(Graph2Panel, ID_SETGRIDBTN, _("Set matrix grid"), wxPoint(280,240), wxSize(100,23), 0, wxDefaultValidator, _T("ID_SETGRIDBTN"));
    SetGridBtn->Disable();
    SetGridBtn->Hide();
    RoutesBtn = new wxButton(Graph2Panel, ID_ROUTESBTN, _("Print routes"), wxPoint(440,280), wxSize(88,23), 0, wxDefaultValidator, _T("ID_ROUTESBTN"));
    RoutesRichTextCtrl = new wxRichTextCtrl(Graph2Panel, ID_ROUTESRICHTEXTCTRL, wxEmptyString, wxPoint(440,8), wxSize(416,264), wxRE_MULTILINE, wxDefaultValidator, _T("ID_ROUTESRICHTEXTCTRL"));
    wxRichTextAttr rchtxtAttr_5;
    rchtxtAttr_5.SetBulletStyle(wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT);
    RoutesTextCtrl = new wxTextCtrl(Graph2Panel, ID_ROUTESTEXTCTRL, _("1"), wxPoint(656,296), wxSize(120,21), 0, wxDefaultValidator, _T("ID_ROUTESTEXTCTRL"));
    RoutesTextCtrl->SetToolTip(_(" used only for random walk"));
    LengthLbl = new wxStaticText(Graph2Panel, ID_LENGTHLBL, _("Length of random walk"), wxPoint(656,280), wxDefaultSize, 0, _T("ID_LENGTHLBL"));
    FromLbl = new wxStaticText(Graph2Panel, ID_FROMLBL, _("From"), wxPoint(656,328), wxDefaultSize, 0, _T("ID_FROMLBL"));
    ToLbl = new wxStaticText(Graph2Panel, ID_TOLBL, _("To"), wxPoint(656,348), wxSize(13,16), 0, _T("ID_TOLBL"));
    FromTextCtrl = new wxTextCtrl(Graph2Panel, ID_FROMTEXTCTRL, _("1"), wxPoint(688,320), wxSize(88,21), 0, wxDefaultValidator, _T("ID_FROMTEXTCTRL"));
    FromTextCtrl->SetToolTip(_("Vertice label for start point (used only for random walk)"));
    ToTextCtrl = new wxTextCtrl(Graph2Panel, ID_TOTEXTCTRL, _("2"), wxPoint(688,344), wxSize(88,21), 0, wxDefaultValidator, _T("ID_TOTEXTCTRL"));
    ToTextCtrl->SetToolTip(_("Vertice label for end point (used only for random walk)"));
    wxString __wxRadioBoxChoices_1[4] =
    {
    	_("Random walk"),
    	_("Euler trail"),
    	_("Euler circuit"),
    	_("Hamiltonian\ncircuit")
    };
    RoutesRadioBox = new wxRadioBox(Graph2Panel, ID_ROUTESRADIOBOX, _("Types of routes"), wxPoint(530,280), wxSize(120, 130), 4, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_ROUTESRADIOBOX"));
    ClearMatrixBtn = new wxButton(Graph2Panel, ID_CLEARMATRIXBTN, _("Clear matrix"), wxPoint(160,272), wxSize(104,23), 0, wxDefaultValidator, _T("ID_CLEARMATRIXBTN"));
    MakeSymmetricBtn = new wxButton(Graph2Panel, ID_MAKESYMMETRICBTN, _("Make symmetric"), wxPoint(160,296), wxSize(118,23), 0, wxDefaultValidator, _T("ID_MAKESYMMETRICBTN"));
    LabelsBtn = new wxButton(Graph2Panel, ID_LABELSBTN, _("Set labels"), wxPoint(280,348), wxSize(100,23), 0, wxDefaultValidator, _T("ID_LABELSBTN"));
    StaticText1 = new wxStaticText(Graph2Panel, ID_STATICTEXT1, _("Labels"), wxPoint(224,328), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    LabelsTextCtrl = new wxTextCtrl(Graph2Panel, ID_LABELSTEXTCTRL, wxEmptyString, wxPoint(280,324), wxSize(96,21), 0, wxDefaultValidator, _T("ID_LABELSTEXTCTRL"));
    LabelsTextCtrl->SetToolTip(_("\"pqrs\" or \"p,q,r,s\" to set 4 vertices (each vertice can only be represented by a single alphabet or digit)"));
    FillEmptyBtn = new wxButton(Graph2Panel, ID_FILLEMPTYBTN, _("Fill with 0"), wxPoint(272,272), wxSize(140,23), 0, wxDefaultValidator, _T("ID_FILLEMPTYBTN"));
    Notebook->AddPage(LogicPanel, _("Logic"), false);
    Notebook->AddPage(ModuloPanel, _("Modulo"), false);
    Notebook->AddPage(GraphPanel, _("Graph"), false);
    Notebook->AddPage(TreePanel, _("Tree"), false);
    Notebook->AddPage(Graph2Panel, _("Graph2"), false);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    MainStatusBar = new wxStatusBar(this, ID_MAINSTATUSBAR, 0, _T("ID_MAINSTATUSBAR"));
    int __wxStatusBarWidths_1[2] = { -10, -10 };
    int __wxStatusBarStyles_1[2] = { wxSB_NORMAL, wxSB_NORMAL };
    MainStatusBar->SetFieldsCount(2,__wxStatusBarWidths_1);
    MainStatusBar->SetStatusStyles(2,__wxStatusBarStyles_1);
    SetStatusBar(MainStatusBar);

    Connect(ID_ANDBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnAndBtnClick);
    Connect(ID_ORBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnOrBtnClick);
    Connect(ID_COMPUTEBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnComputeBtnClick);
    Connect(ID_NEGATEBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnNegateBtnClick);
    Connect(ID_IMPLYBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnImplyBtnClick);
    Connect(ID_CLEARBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnClearBtnClick);
    LogicPanel->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&CS1231Frame::OnLogicPanelMouseEnter,0,this);
    Connect(ID_CONVERTBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnConvertBtnClick);
    Connect(ID_FACTORISEBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnFactoriseBtnClick);
    Connect(ID_LCMBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnLCMBtnClick);
    Connect(ID_GCFBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnGCDBtnClick);
    Connect(ID_SWAPBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnSwapBtnClick);
    Connect(ID_EUCLIDEANBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnGCDEuclideanBtnClick);
    Connect(ID_EVALUATEBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnEvaluateBtnClick);
    Connect(ID_PLOTBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnPlotBtnClick);
    Connect(ID_FIBONNACCIBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnFibonnacciBtnClick);
    Connect(ID_PIECEWISEBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnPiecewiseBtnClick);
    Connect(ID_POLYNOMIALBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnPolynomialBtnClick);
    Connect(ID_FLOORBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnFloorBtnClick);
    GraphPanel->Connect(wxEVT_LEFT_DOWN,(wxObjectEventFunction)&CS1231Frame::OnGraphMathPlotLeftDown,0,this);
    GraphPanel->Connect(wxEVT_LEFT_UP,(wxObjectEventFunction)&CS1231Frame::OnGraphPanelLeftUp,0,this);
    GraphPanel->Connect(wxEVT_MOTION,(wxObjectEventFunction)&CS1231Frame::OnGraphPanelMouseMove,0,this);
    Connect(ID_COMPUTEORDERBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnComputeOrderBtnClick);
    Connect(ID_DETERMINANTBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnDeterminantBtnClick);
    Connect(ID_SETGRIDBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnSetGridBtnClick);
    Connect(ID_ROUTESBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnRoutesBtnClick);
    Connect(ID_CLEARMATRIXBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnClearMatrixBtnClick);
    Connect(ID_MAKESYMMETRICBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnMakeSymmetricBtnClick);
    Connect(ID_LABELSBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnLabelsBtnClick);
    Connect(ID_FILLEMPTYBTN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CS1231Frame::OnFillEmptyBtnClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CS1231Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CS1231Frame::OnAbout);
    //*)
    CS1231Frame::initialise();
}

CS1231Frame::~CS1231Frame()
{
    //(*Destroy(CS1231Frame)
    //*)
}

void CS1231Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void CS1231Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(_("This project is made possible by developers of wxWidgets,\n"
                   "Arash Partow who developed the exprtk library,\n"
                   "and authors of the wxMathPlot library.\n"
                   "This application is used under the wxWidgets L-GPL license."), "Version 1.1");
}

void CS1231Frame::initialise(){
    AndBtn->SetLabel((wchar_t)8743);
    OrBtn->SetLabel((wchar_t)8744);
    ImplyBtn->SetLabel((wchar_t)8594);

    vectorLayer = new mpFXYVector(_(""));
	vectorLayer->SetDrawOutsideMargins(false);

    wxFont graphFont(11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    mpScaleX* xaxis = new mpScaleX(wxT("X"), mpALIGN_BOTTOM, true, mpX_NORMAL);
    mpScaleY* yaxis = new mpScaleY(wxT("Y"), mpALIGN_LEFT, true);
    xaxis->SetFont(graphFont);
    yaxis->SetFont(graphFont);
    xaxis->SetDrawOutsideMargins(false);
    yaxis->SetDrawOutsideMargins(false);

    GraphMathPlot->SetMargins(30, 30, 80, 80);
    GraphMathPlot->AddLayer(vectorLayer);
    GraphMathPlot->AddLayer(xaxis);
    GraphMathPlot->AddLayer(yaxis);

    GraphMathPlot->EnableDoubleBuffer(true);
    GraphMathPlot->SetMPScrollbars(false);

    wxFont font = OutputFactoriseTextCtrl->GetFont();
    font.SetPointSize(font.GetPointSize() + 3);
    OutputFactoriseTextCtrl->SetFont(font);
    Output2FactoriseTextCtrl->SetFont(font);
    ExpressionRichTextCtrl->SetFont(font);
    EquivalentLbl->SetLabel((wchar_t)8801);

    int n = MatrixGrid->GetNumberCols();
    for(int i = 0; i<n; i++){
        MatrixGrid->SetRowLabelValue(i, (char)(65+i));
        MatrixGrid->SetColLabelValue(i, (char)(65+i));
        vertice_labels.push_back((char)(65+i));
    }
}

void CS1231Frame::OnLogicPanelMouseEnter(wxMouseEvent& event){
    LogicTextCtrl->SetFocus();
}

void CS1231Frame::OnAndBtnClick(wxCommandEvent& event){
    LogicTextCtrl->WriteText((wchar_t)8743);
    LogicTextCtrl->SetFocus();
}

void CS1231Frame::OnOrBtnClick(wxCommandEvent& event){
    LogicTextCtrl->WriteText((wchar_t)8744);
    LogicTextCtrl->SetFocus();
}

void CS1231Frame::OnNegateBtnClick(wxCommandEvent& event){
    LogicTextCtrl->WriteText("~");
    LogicTextCtrl->SetFocus();
}

void CS1231Frame::OnImplyBtnClick(wxCommandEvent& event){
    LogicTextCtrl->WriteText((wchar_t)8594);
    LogicTextCtrl->SetFocus();
}

void CS1231Frame::OnComputeBtnClick(wxCommandEvent& event){
    EquationRichTextCtrl->Clear();
    std::wstring expression = LogicTextCtrl->GetValue().ToStdWstring();
    EquationRichTextCtrl->AppendText(expression+"\n");
    distributed = false;
    pre_empty = false;
    SetStatusText("", 0);
    expressionValue(expression);
    tableValue(expression);
}

void CS1231Frame::OnClearBtnClick(wxCommandEvent& event){
    LogicTextCtrl->Clear();
}

bool CS1231Frame::isOperator(wchar_t ch){
    if(ch==(wchar_t)8743 || ch==(wchar_t)8744 || ch==(wchar_t)8594){
        return true;
    }
    return false;
}

wxString CS1231Frame::nicePrint(wxString str){
    int previous = 0;
    bool allowed = false;
    for(int i=0; i<(int)str.length();i++){
        if(str[i]=='('){
            previous = i;
            allowed = true;
        }else if(str[i]==')'){
            if(allowed){
                str[previous]=' ';
                str[i]=' ';
            }
            allowed = false;
        }else if(!((str[i] >= 65 && str[i] <= 90)||(str[i] >= 97 && str[i] <= 122)||str[i]=='~')){
            allowed = false;
        }
    }
    wxString res = "";
    for(int i=0; i<(int)str.length();i++){
        if(str[i] != ' '){
            res += str[i];
        }
    }
    return res;
}

wxString CS1231Frame::printInfix(std::queue<wxString>& step_queue,
                                     std::stack<wxString>& step_stack,
                                     std::set<wxString>& reasons, bool verbose){
    while(!step_queue.empty()){
        wxString op;
        op=step_queue.front();
        step_queue.pop();
        if(op[0]=='~' && op.length()==1){
            wxString str1;
            if(step_stack.empty()){
                SetStatusText("The expression is invalid");
                return "";
            }
            str1=step_stack.top();
            step_stack.pop();

            str1 = trimBrackets(str1);
            step_stack.push(op + str1);
        }else if(isOperator(op[0]) && op.length()==1){
            wxString str1, str2;
            if(step_stack.empty()){
                SetStatusText("The expression  is invalid");
                return "";
            }
            str1=step_stack.top();
            step_stack.pop();

            str1 = trimBrackets(str1);

            if(step_stack.empty()){
                SetStatusText("The expression  is invalid");
                return "";
            }
            str2=step_stack.top();
            step_stack.pop();

            str2 = trimBrackets(str2);
            step_stack.push(str2 + op + str1);
        }else{
            step_stack.push(op);
        }
    }

    wxString res = nicePrint(trimBrackets(step_stack.top(), true));
    if(verbose){
        std::set<wxString> :: iterator itr;
        wxString combReasons = "";
        for (itr = reasons.begin(); itr != reasons.end(); ++itr){
            combReasons += *itr + ", ";
        }
        if(combReasons.IsEmpty()){
            EquationRichTextCtrl->AppendText(res + "\n");
        }else{
            combReasons= combReasons.substr(0, combReasons.length()-2);
            EquationRichTextCtrl->AppendText((wchar_t)8801 + res + " (" + combReasons + ")" + "\n");
        }
        reasons.clear();
    }
    return res;
}

wxString CS1231Frame::trimBrackets(wxString str, bool last){
    int cut_off = 0, bracket_count = 0;
    bool out = false;
    while(str[cut_off]=='(' && str[str.length()-1-cut_off]==')'){
        cut_off++;
        bracket_count = 0;
        for(int i = cut_off; i<=(int)str.length()-1-cut_off; i++){
            if(str[i]=='('){
                bracket_count++;
            }else if(str[i]==')'){
                bracket_count--;
            }
            if(bracket_count<0){
                cut_off--;
                out = true;
                break;
            }
        }
        if(out){
            break;
        }
    }
    if(last){
        return str.substr(cut_off, str.length()-2*cut_off);
    }else{
        return '(' + str.substr(cut_off, str.length()-2*cut_off) + ')';
    }
}

void CS1231Frame::splitTokens(wxString str, wxString opw, std::list<wxString>& tokens){
    //Must included first and last brackets
    if(str[0]!='('){
        tokens.push_back(str);
        return;
    }
    wchar_t op=opw[0], rop;
    if(op == (wchar_t)8743){
        rop = (wchar_t)8744;
    }else{
        rop = (wchar_t)8743;
    }
    int bracket_count = 0, marker = 1;
    bool voided = false;
    std::list<wxString>tokens_copy = tokens;
    for(int i = 0; i < (int)str.length(); i++){
        if(str[i]=='('){
            bracket_count++;
        }else if(str[i]==')'){
            bracket_count--;
        }else if(bracket_count==1 && str[i]==op){
            std::list<wxString>tokens_recur;
            splitTokens(str.substr(marker, i-marker), op, tokens_recur);
            tokens_copy.insert(tokens_copy.end(), tokens_recur.begin(), tokens_recur.end());
            marker = i+1;
        }else if(bracket_count==1 && str[i]==rop){
            voided = true;
            break;
        }
    }
    if(!voided){
        std::list<wxString>tokens_recur;
        splitTokens(str.substr(marker, str.length()-1-marker), op, tokens_recur);
        tokens_copy.insert(tokens_copy.end(), tokens_recur.begin(), tokens_recur.end());
        tokens.insert(tokens.end(), tokens_copy.begin(), tokens_copy.end());
    }else{
        tokens_copy.clear();
        tokens.push_back(str);
    }
}

void CS1231Frame::splitTokens(wxString str, wchar_t op, std::list<wxString>& tokens){
    //Must included first and last brackets
    if(str[0]!='('){
        tokens.push_back(str);
        return;
    }
    wchar_t rop;
    if(op == (wchar_t)8743){
        rop = (wchar_t)8744;
    }else{
        rop = (wchar_t)8743;
    }
    int bracket_count = 0, marker = 1;
    bool voided = false;
    std::list<wxString>tokens_copy = tokens;
    for(int i = 0; i < (int)str.length(); i++){
        if(str[i]=='('){
            bracket_count++;
        }else if(str[i]==')'){
            bracket_count--;
        }else if(bracket_count==1 && str[i]==op){
            std::list<wxString>tokens_recur;
            splitTokens(str.substr(marker, i-marker), op, tokens_recur);
            tokens_copy.insert(tokens_copy.end(), tokens_recur.begin(), tokens_recur.end());
            marker = i+1;
        }else if(bracket_count==1 && str[i]==rop){
            voided = true;
            break;
        }
    }
    if(!voided){
        std::list<wxString>tokens_recur;
        splitTokens(str.substr(marker, str.length()-1-marker), op, tokens_recur);
        tokens_copy.insert(tokens_copy.end(), tokens_recur.begin(), tokens_recur.end());
        tokens.insert(tokens.end(), tokens_copy.begin(), tokens_copy.end());
    }else{
        tokens_copy.clear();
        tokens.push_back(str);
    }
}

wxString CS1231Frame::join(std::list<wxString> tokens, wxString delimiterw) {
    int delimiter = delimiterw[0];
    wxString comb;
    for(std::list<wxString>::iterator it = tokens.begin(); it != tokens.end(); ++it){
        if(it != tokens.begin()){
            comb+= delimiter;
        }
        comb+= *it;
    }
    return wxString(comb);
}

wxString CS1231Frame::join(std::list<wxString> tokens, wchar_t delimiter) {
    wxString comb;
    for(std::list<wxString>::iterator it = tokens.begin(); it != tokens.end(); ++it){
        if(it != tokens.begin()){
            comb+= delimiter;
        }
        comb+= *it;
    }
    return wxString(comb);
}

bool CS1231Frame::containOps(wxString str){
    for(int i = 0; i<(int)str.length();i++){
        if(isOperator(str[i])){
            return true;
        }
    }
    return false;
}

void CS1231Frame::expressionValue(wxString str, wxString initial, bool distributive){
    std::map<wchar_t,int>priority;
    priority['~']=2;
    priority[(wchar_t)8743]=1;
    priority[(wchar_t)8744]=1;

    std::stack<wchar_t>op_stack;
    std::queue<wxString>val_queue;

    //Shunting Yard Algorithm
    for(int i=0;str[i];i++){
        wchar_t ch = str[i];
        if((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122)){
            wxString variable;
            variable += ch;
            ch = str[++i];
            while(ch && ((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122))){
                variable += str[i];
                ch = str[++i];
            }
            i--;
            val_queue.push(variable);
        }else if(ch == '~'){
            op_stack.push(ch);
        }else if(isOperator(ch)){
            while(!op_stack.empty() && op_stack.top() != '(' && priority[op_stack.top()] >= priority[ch]){
               val_queue.push(op_stack.top());
               op_stack.pop();
            }
            op_stack.push(ch);
        }else if(ch=='('){
            op_stack.push(ch);
        }else if(ch==')'){
            while(op_stack.top() != '('){
               if(op_stack.empty()){
                    SetStatusText("Mismatch of brackets", 0);
                    return;
               }
               val_queue.push(op_stack.top());
               op_stack.pop();
            }
            op_stack.pop();
        }else{
            SetStatusText("Illegal symbol/s", 0);
            return;
        }
    }
    while(!op_stack.empty()){
        if(op_stack.top() == '(' || op_stack.top() == ')'){
            SetStatusText("Mismatch of brackets", 0);
            return;
        }
        val_queue.push(op_stack.top());
        op_stack.pop();
    }

    std::set<wxString> reasons;
    std::queue<wxString>test_queue = val_queue;
    std::stack<wxString>val_stack;
    wxString check = printInfix(test_queue, val_stack, reasons, false);
    if(check == ""){
        return;
    }
    bool non_empty = false;
    while(!val_queue.empty()){
        //wxMessageBox(wxString::Format(wxT("%i"),(int)val_queue.size()));
        wxString op;
        op=val_queue.front();
        val_queue.pop();

        if(op[0]=='~' && op.length()==1){
            wxString str1;
            str1 = val_stack.top();
            val_stack.pop();
            str1 = trimBrackets(str1);
            wxString combStr;
            int start = 0;
            bool skip = false, double_negated = false;
            for(int i=0;str1[i];i++){
                wchar_t ch = str1[i];
                if(ch=='('){
                    start++;
                    combStr += '(';
                }else if(ch==')'){
                    start--;
                    combStr += ')';
                    if(double_negated){
                        double_negated = false;
                        skip = !skip;
                    }
                    if(start==0){
                        break;
                    }
                }else if(ch=='F'){
                    if(!skip){
                        reasons.insert("Negation of false");
                        combStr += 'T';
                    }else{
                        combStr += 'F';
                    }
                }else if(ch=='T'){
                    if(!skip){
                        reasons.insert("Negation of true");
                        combStr += 'F';
                    }else{
                        combStr += 'T';
                    }
                }else if((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122)){
                    if(!skip){
                        combStr += '~';
                    }
                    combStr += ch;
                    ch = str1[++i];
                    while(ch && ((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122))){
                        combStr += str1[i];
                        ch = str[++i];
                    }
                    i--;
                }else if(ch==(wchar_t)8743){
                    reasons.insert("De Morgan's law");
                    if(!skip){
                        combStr += (wchar_t)8744;
                    }else{
                        combStr += (wchar_t)8743;
                    }
                }else if(ch==(wchar_t)8744){
                    reasons.insert("De Morgan's law");
                    if(!skip){
                        combStr += (wchar_t)8743;
                    }else{
                        combStr += (wchar_t)8744;
                    }
                }else if(ch=='~'){
                    reasons.insert("Double negation law");
                    skip = !skip;
                    double_negated = true;
                }
            }
            val_stack.push(combStr);
        }else if(isOperator(op[0]) && op.length()==1){
            wxString str1, str2;
            str1=val_stack.top();
            val_stack.pop();
            str1 = trimBrackets(str1);

            str2=val_stack.top();
            val_stack.pop();
            str2 = trimBrackets(str2);

            if(op==(wchar_t)8743){
                std::list<wxString>tokens, tokens2;
                splitTokens(str1, op, tokens2);
                splitTokens(str2, op, tokens);
                tokens.insert(tokens.end(), tokens2.begin(), tokens2.end());

                bool conditions[5] = {false};
                bool result = false, associative = false;
                for (std::list<wxString>::iterator it = tokens.begin(); it != tokens.end(); ++it){
                    if(*it == "T"){
                        conditions[0] = true;
                        break;
                    }
                    if(*it == "F"){
                        conditions[1] = true;
                        break;
                    }
                    for (std::list<wxString>::iterator it2 = next(it); it2 != tokens.end(); ++it2){
                        if(*it == *it2){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[2] = true;
                            tokens.erase(it2);
                            result = true;
                            break;
                        }else if(*it == "~(" + *it2 + ")"){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[3] = true;
                            result = true;
                            break;
                        }else if("~(" + *it + ")" == *it2){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[3] = true;
                            result = true;
                            break;
                        }else if(!containOps(*it) && *it == "~" + *it2){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[3] = true;
                            result = true;
                            break;
                        }else if(!containOps(*it2) && "~" + *it == *it2){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[3] = true;
                            result = true;
                            break;
                        }else if((*it).find(*it2, 0) != std::string::npos){
                            std::list<wxString>tokens3;
                            splitTokens(*it, (wchar_t)8744, tokens3);
                            for (std::list<wxString>::iterator it3 = tokens3.begin(); it3 != tokens3.end(); ++it3){
                                if(*it3 == *it2){
                                    if(it3 != tokens3.begin() || std::distance(it, it2) > 1){
                                        associative=true;
                                    }
                                    conditions[4] = true;
                                    tokens.erase(it);
                                    result = true;
                                    break;
                                }
                            }
                            if(result){
                                break;
                            }
                        }else if((*it2).find(*it, 0) != std::string::npos){
                            std::list<wxString>tokens3;
                            splitTokens(*it2, (wchar_t)8744, tokens3);
                            for (std::list<wxString>::iterator it3 = tokens3.begin(); it3 != tokens3.end(); ++it3){
                                if(*it3 == *it){
                                    if(it3 != tokens3.begin() || std::distance(it, it2) > 1){
                                        associative=true;
                                    }
                                    conditions[4] = true;
                                    tokens.erase(it2);
                                    result = true;
                                    break;
                                }
                            }
                            if(result){
                                break;
                            }
                        }
                    }
                    if(result){
                        break;
                    }
                }

                if(conditions[0]){
                    reasons.insert("Identity law");
                    tokens.remove_if([](wxString x){return x=='T';});
                    if(tokens.empty()){
                        val_stack.push('T');
                    }else{
                        val_stack.push(join(tokens, op));
                    }
                }else if(conditions[1]){
                    reasons.insert("Universal bound law");
                    val_stack.push('F');
                }else if(conditions[2]){
                    if(associative){
                        reasons.insert("Associative law");
                    }
                    reasons.insert("Idempotent law");
                    val_stack.push(join(tokens, op));
                }else if(conditions[3]){
                    if(associative){
                        reasons.insert("Associative law");
                    }
                    reasons.insert("Negation law");
                    val_stack.push('F');
                }else if(conditions[4]){
                    if(associative){
                        reasons.insert("Associative law");
                    }
                    reasons.insert("Absorption law");
                    val_stack.push(join(tokens, op));
                }else{
                    bool done = false;
                    if(distributive){
                        wxString combStr;
                        std::list<wxString>tokens3;
                        splitTokens(str1, (wchar_t)8744, tokens3);
                        if(tokens3.size() > 1){
                            for (std::list<wxString>::iterator it3 = tokens3.begin(); it3 != tokens3.end(); ++it3){
                                if(it3 != tokens3.begin()){
                                    combStr += (wchar_t)8744;
                                }
                                combStr += '(' + str2 + (wchar_t)8743 + *it3 + ')';
                            }
                            reasons.insert("Distributive law");
                            val_stack.push(combStr);
                            done = true;
                        }
                    }
                    if(!done && distributive){
                        wxString combStr;
                        std::list<wxString>tokens3;
                        splitTokens(str2, (wchar_t)8744, tokens3);
                        if(tokens3.size() > 1){
                            for (std::list<wxString>::iterator it3 = tokens3.begin(); it3 != tokens3.end(); ++it3){
                                if(it3 != tokens3.begin()){
                                    combStr += (wchar_t)8744;
                                }
                                combStr += '(' + str1 + (wchar_t)8743 + *it3 + ')';
                            }
                            reasons.insert("Distributive law");
                            val_stack.push(combStr);
                            //done = true;
                        }
                    }
                }
                if(reasons.empty()){
                    val_stack.push('(' + str2 + (wchar_t)8743 + str1 + ')');
                }
            }else if(op==(wchar_t)8744){
                std::list<wxString>tokens, tokens2;
                splitTokens(str1, op, tokens);
                splitTokens(str2, op, tokens2);
                tokens.insert(tokens.end(), tokens2.begin(), tokens2.end());

                bool conditions[5] = {false};
                bool result = false, associative = false;
                wxString absorbed_res;
                for (std::list<wxString>::iterator it = tokens.begin(); it != tokens.end(); ++it){
                    if(*it == "T"){
                        conditions[0] = true;
                        break;
                    }
                    if(*it == "F"){
                        conditions[1] = true;
                        break;
                    }
                    for (std::list<wxString>::iterator it2 = next(it); it2 != tokens.end(); ++it2){
                        if(*it == *it2){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[2] = true;
                            tokens.erase(it2);
                            result = true;
                            break;
                        }else if(*it == "~(" + *it2 + ")"){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[3] = true;
                            result = true;
                            break;
                        }else if("~(" + *it + ")" == *it2){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[3] = true;
                            result = true;
                            break;
                        }else if(!containOps(*it) && *it == "~" + *it2){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[3] = true;
                            result = true;
                            break;
                        }else if(!containOps(*it2) && "~" + *it == *it2){
                            if(std::distance(it, it2) > 1){
                                associative = true;
                            }
                            conditions[3] = true;
                            result = true;
                            break;
                        }else if((*it).find(*it2, 0) != std::string::npos){
                            std::list<wxString>tokens3;
                            splitTokens(*it, (wchar_t)8743, tokens3);
                            for (std::list<wxString>::iterator it3 = tokens3.begin(); it3 != tokens3.end(); ++it3){
                                if(*it3 == *it2){
                                    if(it3 != tokens3.begin() || std::distance(it, it2) > 1){
                                        associative=true;
                                    }
                                    conditions[4] = true;
                                    tokens.erase(it);
                                    result = true;
                                    break;
                                }
                            }
                            if(result){
                                break;
                            }
                        }else if((*it2).find(*it, 0) != std::string::npos){
                            std::list<wxString>tokens3;
                            splitTokens(*it2, (wchar_t)8743, tokens3);
                            for (std::list<wxString>::iterator it3 = tokens3.begin(); it3 != tokens3.end(); ++it3){
                                if(*it3 == *it){
                                    if(it3 != tokens3.begin() || std::distance(it, it2) > 1){
                                        associative=true;
                                    }
                                    conditions[4] = true;
                                    tokens.erase(it2);
                                    result = true;
                                    break;
                                }
                            }
                            if(result){
                                break;
                            }
                        }
                    }
                    if(result){
                        break;
                    }
                }
                if(conditions[1]){
                    reasons.insert("Identity law");
                    tokens.remove_if([](wxString x){return x=='F';});
                    if(tokens.empty()){
                        val_stack.push('F');
                    }else{
                        val_stack.push(join(tokens, op));
                    }
                }else if(conditions[0]){
                    reasons.insert("Universal bound law");
                    val_stack.push('T');
                }else if(conditions[2]){
                    if(associative){
                        reasons.insert("Associative law");
                    }
                    reasons.insert("Idempotent law");
                    val_stack.push(join(tokens, op));
                }else if(conditions[3]){
                    if(associative){
                        reasons.insert("Associative law");
                    }
                    reasons.insert("Negation law");
                    val_stack.push('T');
                }else if(conditions[4]){
                    if(associative){
                        reasons.insert("Associative law");
                    }
                    reasons.insert("Absorption law");
                    val_stack.push(join(tokens, op));
                }else{
                    bool done = false;
                    if(distributive){
                        wxString combStr;
                        std::list<wxString>tokens3;
                        splitTokens(str1, (wchar_t)8743, tokens3);
                        if(tokens3.size() > 1){
                            for (std::list<wxString>::iterator it3 = tokens3.begin(); it3 != tokens3.end(); ++it3){
                                if(it3 != tokens3.begin()){
                                    combStr += (wchar_t)8743;
                                }
                                combStr += '(' + str2 + (wchar_t)8744 + *it3 + ')';
                            }
                            reasons.insert("Distributive law");
                            val_stack.push(combStr);
                            done = true;
                        }
                    }
                    if(!done && distributive){
                        wxString combStr;
                        std::list<wxString>tokens3;
                        splitTokens(str2, (wchar_t)8743, tokens3);
                        if(tokens3.size() > 1){
                            for (std::list<wxString>::iterator it3 = tokens3.begin(); it3 != tokens3.end(); ++it3){
                                if(it3 != tokens3.begin()){
                                    combStr += (wchar_t)8743;
                                }
                                combStr += '(' + str1 + (wchar_t)8744 + *it3 + ')';
                            }
                            reasons.insert("Distributive law");
                            val_stack.push(combStr);
                            //done = true;
                        }
                    }
                }
                if(reasons.empty()){
                    val_stack.push('(' + str2 + (wchar_t)8744 + str1 + ')');
                }
            }else if(op==(wchar_t)8594){
                reasons.insert("Implication law");
                val_stack.push('~' + str2 + (wchar_t)8744 + str1);
            }
        }else{
            val_stack.push(op);
        }

        if(!reasons.empty()){
            if(reasons.find("Distributive law") != reasons.end()){
                distributive = false;
                distributed = true;
            }else{
                distributed = false;
            }
            non_empty = true;
            std::stack<wxString>test_stack = val_stack;
            std::queue<wxString>test_queue = val_queue;
            wxString final_val = printInfix(test_queue, test_stack, reasons, false);
            printInfix(test_queue, test_stack, reasons, true);
        }
    }
    wxString final_val = printInfix(val_queue, val_stack, reasons, false);
    if(final_val==initial){
        if(!non_empty && !distributed && !pre_empty){
            pre_empty = true;
            expressionValue(final_val, final_val, true);
        }
        return;
    }
    pre_empty = false;
    expressionValue(final_val, final_val, false);
}

void CS1231Frame::tableValue(wxString str){
    std::map<wchar_t,int>priority;
    priority['~']=2;
    priority[(wchar_t)8743]=1;
    priority[(wchar_t)8744]=1;

    std::stack<wchar_t>op_stack;
    std::queue<wxString>val_queue;
    std::set<wxString> variables;
    //Shunting Yard Algorithm
    for(int i=0;str[i];i++){
        wchar_t ch = str[i];
        if((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122)){
            wxString variable;
            variable += ch;
            ch = str[++i];
            while(ch && ((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122))){
                variable += str[i];
                ch = str[++i];
            }
            i--;
            val_queue.push(variable);
            variables.insert(variable);
        }else if(ch == '~'){
            op_stack.push(ch);
        }else if(isOperator(ch)){
            while(!op_stack.empty() && op_stack.top() != '(' && priority[op_stack.top()] >= priority[ch]){
               val_queue.push(wxString(1,op_stack.top()));
               op_stack.pop();
            }
            op_stack.push(ch);
        }else if(ch=='('){
            op_stack.push(ch);
        }else if(ch==')'){
            while(op_stack.top() != '('){
               if(op_stack.empty()){
                    SetStatusText("Mismatch of brackets", 0);
                    return;
               }
               val_queue.push(wxString(1,op_stack.top()));
               op_stack.pop();
            }
            op_stack.pop();
        }else{
            SetStatusText("Illegal symbol/s", 0);
            return;
        }
    }
    while(!op_stack.empty()){
        if(op_stack.top() == '(' || op_stack.top() == ')'){
            SetStatusText("Mismatch of brackets", 0);
            return;
        }
        val_queue.push(wxString(1,op_stack.top()));
        op_stack.pop();
    }

    std::set<wxString> reasons;
    std::queue<wxString>test_queue = val_queue;
    std::stack<wxString>val_stack;
    wxString check = printInfix(test_queue, val_stack, reasons, false);
    if(check == ""){
        return;
    }

    int len=pow(2,variables.size()), pos=1;
    if(len == 0){
        SetStatusText("Must have at least 1 variable", 0);
    }

    std::map<wxString, int> variable_to_pos;
    for(std::set<wxString>::iterator it=variables.begin(); it!=variables.end(); ++it){
        variable_to_pos.insert({*it, pos});
        pos++;
    }

    if(pos>LogicGrid->GetNumberCols()){
        LogicGrid->AppendCols(pos-LogicGrid->GetNumberCols());
    }else if(pos<LogicGrid->GetNumberCols()){
        LogicGrid->DeleteCols(0,LogicGrid->GetNumberCols()-pos);
    }
    if(len>LogicGrid->GetNumberRows()){
        LogicGrid->AppendRows(len-LogicGrid->GetNumberRows());
    }else if(len<LogicGrid->GetNumberRows()){
        LogicGrid->DeleteRows(0,LogicGrid->GetNumberRows()-len);
    }

    int index = 0;
    for(std::set<wxString>::iterator it=variables.begin(); it!=variables.end(); ++it){
        LogicGrid->SetColLabelValue(index, *it);
        index++;
    }
    LogicGrid->SetColLabelValue(index, "expr");

    for(int i = 0; i<len; i++){
        std::queue<wxString>step_queue = val_queue;
        std::stack<wxString>step_stack;
        std::string binary = std::bitset<32>(i).to_string();
        while(!step_queue.empty()){
            wxString op;
            op=step_queue.front();
            step_queue.pop();
            if(op.length()==1){
                if(op[0]=='~'){
                    wxString str1;
                    str1=step_stack.top();
                    step_stack.pop();

                    if(str1 != 'T' && str1 != 'F'){
                        int offset = variable_to_pos[str1];
                        if(binary.substr(binary.length()-offset, 1) == "1"){
                            str1='F';
                        }else{
                            str1='T';
                        }
                    }else if(str1=='T'){
                        str1='F';
                    }else if(str1=='F'){
                        str1='T';
                    }
                    step_stack.push(str1);
                }else if(op[0]==(wchar_t)8743){
                    wxString str1, str2;
                    str1=step_stack.top();
                    step_stack.pop();
                    str2=step_stack.top();
                    step_stack.pop();

                    if(str1 != 'T' && str1 != 'F'){
                        int offset = variable_to_pos[str1];
                        if(binary.substr(binary.length()-offset, 1) == "1"){
                            str1='T';
                        }else{
                            str1='F';
                        }
                    }

                    if(str2 != 'T' && str2 != 'F'){
                        int offset = variable_to_pos[str2];
                        if(binary.substr(binary.length()-offset, 1) == "1"){
                            str2='T';
                        }else{
                            str2='F';
                        }
                    }

                    if(str1=='T' && str2=='T'){
                        step_stack.push('T');
                    }else{
                        step_stack.push('F');
                    }
                }else if(op[0]==(wchar_t)8744){
                    wxString str1, str2;
                    str1=step_stack.top();
                    step_stack.pop();
                    str2=step_stack.top();
                    step_stack.pop();

                    if(str1 != 'T' && str1 != 'F'){
                        int offset = variable_to_pos[str1];
                        if(binary.substr(binary.length()-offset, 1) == "1"){
                            str1='T';
                        }else{
                            str1='F';
                        }
                    }

                    if(str2 != 'T' && str2 != 'F'){
                        int offset = variable_to_pos[str2];
                        if(binary.substr(binary.length()-offset, 1) == "1"){
                            str2='T';
                        }else{
                            str2='F';
                        }
                    }

                    if(str1=='F' && str2=='F'){
                        step_stack.push('F');
                    }else{
                        step_stack.push('T');
                    }
                }else if(op[0]==(wchar_t)8594){
                    wxString str1, str2;
                    str1=step_stack.top();
                    step_stack.pop();
                    str2=step_stack.top();
                    step_stack.pop();

                    if(str1 != 'T' && str1 != 'F'){
                        int offset = variable_to_pos[str1];
                        if(binary.substr(binary.length()-offset, 1) == "1"){
                            str1='T';
                        }else{
                            str1='F';
                        }
                    }

                    if(str2 != 'T' && str2 != 'F'){
                        int offset = variable_to_pos[str2];
                        if(binary.substr(binary.length()-offset, 1) == "1"){
                            str2='T';
                        }else{
                            str2='F';
                        }
                    }

                    if(str2=='T' && str1=='F'){
                        step_stack.push('F');
                    }else{
                        step_stack.push('T');
                    }
                }else{
                    step_stack.push(op);
                }
            }else{
                step_stack.push(op);
            }
        }
        for(int offset=1; offset<=(int)variables.size(); offset++){
            if(binary.substr(binary.length()-offset, 1)=="1"){
                LogicGrid->SetCellValue(i,offset-1,"T");
            }else{
                LogicGrid->SetCellValue(i,offset-1,"F");
            }
        }
        LogicGrid->SetCellValue(i,(int)variables.size(),step_stack.top());
    }
}

long custom_strtol(wxString str, bool& success){
    if(str.length()==0){
        success = false;
        return -1;
    }
    bool neg = false;
    int start=0;
    if(str[0]=='-'){
        neg=true;
        start++;
    }
    long val = 0;
    for(int i = start; str[i]; i++){
        int digit = str[i] - '0';
        if(digit >= 0 && digit <=9){
            val = val * 10 + digit;
        }else{
            success = false;
            return -1;
        }
    }
    success = true;
    if(neg){
        return -val;
    }else{
        return val;
    }
}

unsigned long long custom_strtoull(wxString str){
    if(str.length()==0){
        return -1;
    }
    unsigned long long val = 0;
    for(int i = 0; str[i]; i++){
        int digit = str[i] - '0';
        if(digit >= 0 && digit <=9){
            val = val * 10 + digit;
        }else{
            return -1;
        }
    }
    return val;
}


void CS1231Frame::OnFibonnacciBtnClick(wxCommandEvent& event){
    GraphTextCtrl->AppendText(
           "var w := 0;\n"
           "var y := 0;\n"
           "var z := 1;\n"
           "var u := x;\n"
           "if(u == 0 ){\n"
           "  z := 0;\n"
           "}else if(u == 1){\n"
           "  z := 1;\n"
           "}else{\n"
           "  u := u - 1;\n"
           "  while(u>0){\n"
           "    u := u - 1;\n"
           "    w := z;\n"
           "    z := z + y;\n"
           "    y := w;\n"
           "  }\n"
           "}\n"
           "z;");
}

void CS1231Frame::OnPiecewiseBtnClick(wxCommandEvent& event){
    GraphTextCtrl->AppendText(
           "var z := 0;\n"
           "if (x % 2 == 0){\n"
           "  z := x;\n"
           "}else{\n"
           "  z := 2x-1;\n"
           "}");
}

void CS1231Frame::OnPolynomialBtnClick(wxCommandEvent& event){
    GraphTextCtrl->AppendText("x^3-2x^2+2x-1");
}

void CS1231Frame::OnFloorBtnClick(wxCommandEvent& event){
    GraphTextCtrl->AppendText("floor(x/2)");
}


void CS1231Frame::OnPlotBtnClick(wxCommandEvent& event){
    std::string expression_string = GraphTextCtrl->GetValue().ToStdString();
    double xcoord;
    exprtk::symbol_table<double> symbol_table;
    exprtk::expression<double> expression;
    exprtk::parser<double> parser;
    symbol_table.add_variable("x", xcoord);
    symbol_table.add_constants();
    expression.register_symbol_table(symbol_table);
    bool success = parser.compile(expression_string, expression);
    if(!success){
        SetStatusText("Function is invalid");
        return;
    }

    wxString range = RangeXTextCtrl->GetValue();
    for(unsigned int i=0; i<range.length(); i++){
        if((range[i]<48 || range[i]>57) && range[i] != ',' && range[i] != '.'  && range[i] != '-'){
            SetStatusText("Illegal characters");
            return;
        }
    }
    int index = range.find(",");
    double min_x, max_x;
    if(index == wxNOT_FOUND){
        SetStatusText("Cannot determine range", 0);
        return;
    }else{
        bool success = false;
        double converted = custom_strtol(range.substr(0, index), success);
        if(!success){
            SetStatusText("Cannot interpret minimum value of x", 0);
            return;
        }else{
            min_x = converted;
        }
        converted = custom_strtol(range.substr(index+1, range.length()-index-1), success);
        if (!success) {
            SetStatusText("Cannot interpret maximum value of x", 0);
            return;
        }else{
            max_x = converted;
        }
    }

    bool checked = XIntegerChkBox->GetValue();
	std::vector<double> vectorx, vectory;
	double interval;
	if(checked){
        vectorLayer->SetContinuity(false);
    	wxPen vectorpen(*wxBLUE, 5, wxPENSTYLE_SOLID);
        vectorLayer->SetPen(vectorpen);
        min_x = ceil(min_x);
        max_x = floor(max_x);
        interval=1;
	}else{
	    vectorLayer->SetContinuity(true);
	    wxPen vectorpen(*wxBLUE, 2, wxPENSTYLE_SOLID);
        vectorLayer->SetPen(vectorpen);
        bool success = false;
        long converted = custom_strtol(NoOfPointsTextCtrl->GetValue(), success);
        long numPoints;
        if(!success || converted <=0){
            SetStatusText("Cannot interpret no. of points", 0);
            numPoints=1000;
        }else{
            numPoints = converted;
        }
        interval=(max_x-min_x)/numPoints;
	}
	for (xcoord = min_x; xcoord <= max_x; xcoord+=interval) {
		vectorx.push_back(xcoord);
		//vectory.push_back(pow(xcoord,2));
		vectory.push_back(expression.value());
	}

	vectorLayer->SetData(vectorx, vectory);
    GraphMathPlot->Fit();
    SetStatusText("Success", 0);
}

void CS1231Frame::OnGraphMathPlotLeftDown(wxMouseEvent& event){
    left_down = true;
    double xcoords = GraphMathPlot->p2x(event.GetX()-GraphMathPlot->GetPosition().x);
    double x, y, best_x=0,best_y=0, dist=-1;
    vectorLayer->Rewind();
    while(vectorLayer->GetNextXY(x,y)){
        if(dist>abs(xcoords-x) || dist==-1){
            dist = abs(xcoords-x);
            best_x=x;
            best_y=y;
        }else{
            break;
        }
    }
    if(dist == -1){
        return;
    }else{
        SetStatusText(wxString::Format(wxT("(%lf,%lf)"),best_x, best_y), 0);
    }
}

void CS1231Frame::OnGraphPanelLeftUp(wxMouseEvent& event){
    left_down = false;
}

void CS1231Frame::OnGraphPanelMouseMove(wxMouseEvent& event){
    if(left_down){
        double xcoords = GraphMathPlot->p2x(event.GetX()-GraphMathPlot->GetPosition().x);
        double x, y, best_x=0,best_y=0, dist=-1;
        vectorLayer->Rewind();
        while(vectorLayer->GetNextXY(x,y)){
            if(dist>abs(xcoords-x) || dist==-1){
                dist = abs(xcoords-x);
                best_x=x;
                best_y=y;
            }else{
                break;
            }
        }
        if(dist == -1){
            return;
        }else{
            SetStatusText(wxString::Format(wxT("(%lf,%lf)"),best_x, best_y), 0);
        }
    }
}

int CS1231Frame::val(char c){
    if (c >= '0' && c <= '9'){
        return (int)c - '0';
    }else{
        return (int)c - 'A' + 10;
    }
}

char CS1231Frame::reVal(int num){
    if (num >= 0 && num <= 9){
        return (char)(num + '0');
    }else{
        return (char)(num - 10 + 'A');
    }
}

void CS1231Frame::OnConvertBtnClick(wxCommandEvent& event){
    wxString bases = BaseTextCtrl->GetValue();
    OutputBaseTextCtrl->Clear();
    for(unsigned int i=0; i<bases.length(); i++){
        if((bases[i]<48 || bases[i]>57) && bases[i] != ','){
            SetStatusText("Illegal characters/No negative numbers or decimals");
            return;
        }
    }
    int index = bases.find(",");
    int base1, base2;
    if(index == wxNOT_FOUND){
        SetStatusText("Cannot determine bases", 0);
        return;
    }else{
        bool success = false;
        long converted = custom_strtol(bases.substr(0, index), success);
        if(!success || converted<0){
            SetStatusText("Cannot interpret the initial base", 0);
            return;
        }else{
            base1 = (int)converted;
        }
        converted = custom_strtol(bases.substr(index+1, bases.length()-index-1), success);
        if (!success || converted<0) {
            SetStatusText("Cannot interpret the base to convert to", 0);
            return;
        }else{
            base2 = (int)converted;
        }
    }

    wxString input = InputBaseTextCtrl->GetValue();
    for(unsigned int i=0; i<input.length(); i++){
        if((input[i]<48 || input[i]>57) && !(input[i]>=65 && input[i]<=90)){
            SetStatusText("Illegal characters/No negative numbers or decimals");
            return;
        }
    }
    size_t len = input.length();
    int power = 1;
    unsigned long long num = 0;
    for (int i = len - 1; i >= 0; i--){
        int conv = val(input[i]);
        if(conv >= base1){
           SetStatusText("Invalid number", 0);
           return;
        }
        num += conv * power;
        power = power * base1;
    }

    wxString output = "";
    while(num > 0){
        output = reVal((int)num % base2) + output;
        num /= base2;
    }
    if(output.IsEmpty()){
        output = "0";
    }
    OutputBaseTextCtrl->SetValue(output);
    SetStatusText("Success", 0);
}

void CS1231Frame::primeFactorise(unsigned long long in, std::map<unsigned long long,unsigned long long>& factors, unsigned long long power){
    bool factored = false;
    if(in == 1){
        return;
    }
    for(unsigned long long i = 2; i <= sqrt(in); i++){
        if(in % i == 0){
            primeFactorise(i, factors, power);
            primeFactorise(in/i, factors, power);
            factored = true;
            break;
        }
    }
    if(!factored){
        if(factors.find(in) == factors.end()){
            factors.insert({in, power});
        }else{
            factors[in] = factors[in] + power;
        }
    }
}

bool CS1231Frame::evalFactorise(wxString input, std::map<unsigned long long,unsigned long long>& factors){
    for(unsigned int i=0; i<input.length(); i++){
        if((input[i]<48 || input[i]>57) && input[i] != '*' && input[i] != '^'){
            SetStatusText("Illegal characters/No negative numbers or decimals");
            return false;
        }
    }
    int prev_index = 0, index = input.find("*", 0);
    while(index != wxNOT_FOUND){
        wxString part = input.substr(prev_index, index-prev_index);
        int power_index = part.find("^");
        if(power_index != wxNOT_FOUND){
            unsigned long long converted = custom_strtoull(part.substr(0, power_index));
            if(converted <= 0){
                SetStatusText("Factor must be a positive integer", 0);
                return false;
            }
            unsigned long long power = custom_strtoull(part.substr(power_index+1, part.length()-power_index-1));
            if(converted <= 0){
                SetStatusText("Power must be a positive integer", 0);
                return false;
            }
            primeFactorise(converted, factors, power);
        }else{
            unsigned long long converted = custom_strtoull(part);
            if(converted <= 0){
                SetStatusText("Factor must be a positive integer", 0);
                return false;
            }
            primeFactorise(converted, factors);
        }
        index++;
        prev_index = index;
        index = input.find("*", prev_index);
    }
    wxString part = input.substr(prev_index, input.length()-prev_index);
    int power_index = part.find("^");
    if(power_index != wxNOT_FOUND){
        unsigned long long converted = custom_strtoull(part.substr(0, power_index));
        if(converted <= 0){
            SetStatusText("Factor must be a positive integer", 0);
            return false;
        }
        unsigned long long power = custom_strtoull(part.substr(power_index+1, part.length()-power_index-1));
        if(converted <= 0){
            SetStatusText("Power must be a positive integer", 0);
            return false;
        }
        primeFactorise(converted, factors, power);
    }else{
        unsigned long long converted = custom_strtoull(part);
        if(converted <= 0){
            SetStatusText("Factor must be a positive integer", 0);
            return false;
        }
        primeFactorise(converted, factors);
    }
    return true;
}

wxString CS1231Frame::convertSuperscript(unsigned long long num){
    wxString res = "";
    while(num != 0){
        int r = num % 10;
        switch(r){
            case 1:
                res += 185;
                break;
            case 2:
                res += 178;
                break;
            case 3:
                res += 179;
                break;
            default:
                res += 8304 + r;
                break;
        }
        num /= 10;
    }
    wxString rres;
	for(wxString::reverse_iterator it = res.rbegin(); it != res.rend();++it){
		rres.Append(*it);
	}
    return rres;
}

void CS1231Frame::OnFactoriseBtnClick(wxCommandEvent& event){
    wxString input = InputFactoriseTextCtrl->GetValue();
    OutputFactoriseTextCtrl->Clear();

    std::map<unsigned long long, unsigned long long> factors;
    bool success = evalFactorise(input, factors);
    if(!success){
        return;
    }

    wxString res="";
    for(std::map<unsigned long long, unsigned long long>::iterator it = factors.begin(); it != factors.end(); it++){
        res = res + "*" + std::to_string(it->first) + convertSuperscript(it->second);
    }
    if(res == ""){
        res=" 1";
    }
    OutputFactoriseTextCtrl->SetValue(res.substr(1, res.length()-1));
    SetStatusText("Success", 0);
}

void CS1231Frame::OnLCMBtnClick(wxCommandEvent& event){
    wxString input = InputFactoriseTextCtrl->GetValue();
    Output2FactoriseTextCtrl->Clear();

    std::map<unsigned long long,unsigned long long> factors, factors2;
    bool success = evalFactorise(input, factors);
    if(!success){
        return;
    }

    wxString input2 = Input2FactoriseTextCtrl->GetValue();
    success = evalFactorise(input2, factors2);
    if(!success){
        return;
    }

    wxString res="";
    for(std::map<unsigned long long, unsigned long long>::iterator it2 = factors2.begin(); it2 != factors2.end(); it2++){
        if(factors.find(it2->first) == factors.end()){
            factors.insert({it2->first, it2->second});
        }else{
            factors[it2->first] = std::max(factors[it2->first], it2->second);
        }
    }
    for(std::map<unsigned long long, unsigned long long>::iterator it = factors.begin(); it != factors.end(); it++){
        res = res + "*" + std::to_string(it->first) + convertSuperscript(it->second);
    }

    if(res == ""){
        res=" 1";
    }
    Output2FactoriseTextCtrl->SetValue(res.substr(1, res.length()-1));
    SetStatusText("Success", 0);
}

void CS1231Frame::OnGCDBtnClick(wxCommandEvent& event){
    wxString input = InputFactoriseTextCtrl->GetValue();
    Output2FactoriseTextCtrl->Clear();

    std::map<unsigned long long, unsigned long long> factors, factors2;
    bool success = evalFactorise(input, factors);
    if(!success){
        return;
    }

    wxString input2 = Input2FactoriseTextCtrl->GetValue();
    success = evalFactorise(input2, factors2);
    if(!success){
        return;
    }

    wxString res="";
    std::map<unsigned long long, unsigned long long>::iterator it2=factors2.begin();
    if(it2 != factors2.end()){
        for(std::map<unsigned long long, unsigned long long>::iterator it = factors.begin(); it != factors.end(); it++){
            while(it->first > it2->first){
                it2++;
                if(it2 == factors2.end()){
                    break;
                }
            }
            if(it->first == it2->first){
                res = res + "*" + std::to_string(it->first) + convertSuperscript(std::min(it->second, it2->second));
            }
        }
    }
    if(res == ""){
        res=" 1";
    }
    Output2FactoriseTextCtrl->SetValue(res.substr(1, res.length()-1));
    SetStatusText("Success", 0);
}

void CS1231Frame::OnSwapBtnClick(wxCommandEvent& event){
    wxString input = InputFactoriseTextCtrl->GetValue();
    wxString input2 = Input2FactoriseTextCtrl->GetValue();
    InputFactoriseTextCtrl->SetValue(input2);
    Input2FactoriseTextCtrl->SetValue(input);
}

unsigned long long CS1231Frame::gcdExtended(unsigned long long a, unsigned long long b, long long *x, long long *y){
    if(a == 0){
        *x = 0;
        *y = 1;
        return b;
    }

    long long x1, y1;
    EuclideanRichTextCtrl->WriteText(wxString::Format("%llu ", b));
    EuclideanRichTextCtrl->BeginUnderline();
    EuclideanRichTextCtrl->WriteText("mod");
    EuclideanRichTextCtrl->EndUnderline();
    EuclideanRichTextCtrl->WriteText(wxString::Format(" %llu=%llu\n", a, b%a));
    unsigned long long gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    if(b%a > 0){
        if(*x < 0){
            if(first_print){
                EuclideanRichTextCtrl->WriteText(wxString::Format("%llu=%lli*%llu%lli*%llu\n", b%a, *y, b, *x, a));
                first_print = false;
            }else{
                EuclideanRichTextCtrl->WriteText(wxString::Format("=%lli*%llu%lli*%llu\n", *y, b, *x, a));
            }
        }else{
            if(first_print){
                EuclideanRichTextCtrl->WriteText(wxString::Format("%llu=%lli*%llu+%lli*%llu\n", b%a, *y, b, *x, a));
                first_print = false;
            }else{
                EuclideanRichTextCtrl->WriteText(wxString::Format("=%lli*%llu+%lli*%llu\n", *y, b, *x, a));
            }
        }
    }
    return gcd;
}

void CS1231Frame::OnGCDEuclideanBtnClick(wxCommandEvent& event){
    wxString input = InputFactoriseTextCtrl->GetValue();
    EuclideanRichTextCtrl->Clear();
    for(int i=0; i<(int)input.length(); i++){
        if((input[i]<48 || input[i]>57) && input[i] != '*' && input[i] != '^'){
            SetStatusText("Illegal characters/No negative numbers or decimals");
            return;
        }
    }
    unsigned long long val=1;
    int prev_index = 0, index = input.find("*", 0);
    std::map<unsigned long long,unsigned long long> factors, factors2;
    while(index != wxNOT_FOUND){
        wxString part = input.substr(prev_index, index-prev_index);
        int power_index = part.find("^");
        if(power_index != wxNOT_FOUND){
            unsigned long long converted = custom_strtoull(part.substr(0, power_index));
            if(converted <= 0){
                SetStatusText("Factor must be a positive integer", 0);
                return;
            }
            unsigned long long power = custom_strtoull(part.substr(power_index+1, part.length()-power_index-1));
            if(converted <= 0){
                SetStatusText("Power must be a positive integer", 0);
                return;
            }
            val *= pow(converted, power);
        }else{
            unsigned long long converted = custom_strtoull(part);
            if(converted <= 0){
                SetStatusText("Factor must be a positive integer", 0);
                return;
            }
            val *= converted;
        }
        index++;
        prev_index = index;
        index = input.find("*", prev_index);
    }
    wxString part = input.substr(prev_index, input.length()-prev_index);
    int power_index = part.find("^");
    if(power_index != wxNOT_FOUND){
        unsigned long long converted = custom_strtoull(part.substr(0, power_index));
        if(converted <= 0){
            SetStatusText("Factor must be a positive integer", 0);
            return;
        }
        unsigned long long power = custom_strtoull(part.substr(power_index+1, part.length()-power_index-1));
        if(converted <= 0){
            SetStatusText("Power must be a positive integer", 0);
            return;
        }
        val *= pow(converted, power);
    }else{
        unsigned long long converted = custom_strtoull(part);
        if(converted <= 0){
            SetStatusText("Factor must be a positive integer", 0);
            return;
        }
        val *= converted;
    }

    wxString input2 = Input2FactoriseTextCtrl->GetValue();
    for(int i=0; i<(int)input2.length(); i++){
        if((input2[i]<48 || input2[i]>57) && input2[i] != '*' && input2[i] != '^'){
            SetStatusText("Illegal characters/No negative numbers or decimals");
            return;
        }
    }
    unsigned long long val2=1;
    prev_index = 0;
    index = input2.find("*", 0);
    while(index != wxNOT_FOUND){
        wxString part = input2.substr(prev_index, index-prev_index);
        int power_index = part.find("^");
        if(power_index != wxNOT_FOUND){
            unsigned long long converted = custom_strtoull(part.substr(0, power_index));
            if(converted <= 0){
                SetStatusText("Factor must be a positive integer", 0);
                return;
            }
            unsigned long long power = custom_strtoull(part.substr(power_index+1, part.length()-power_index-1));
            if(converted <= 0){
                SetStatusText("Power must be a positive integer", 0);
                return;
            }
            val2 *= pow(converted, power);
        }else{
            unsigned long long converted = custom_strtoull(part);
            if(converted <= 0){
                SetStatusText("Factor must be a positive integer", 0);
                return;
            }
            val2 *= converted;
        }
        index++;
        prev_index = index;
        index = input2.find("*", prev_index);
    }
    part = input2.substr(prev_index, input2.length()-prev_index);
    power_index = part.find("^");
    if(power_index != wxNOT_FOUND){
        unsigned long long converted = custom_strtoull(part.substr(0, power_index));
        if(converted <= 0){
            SetStatusText("Factor must be a positive integer", 0);
            return;
        }
        unsigned long long power = custom_strtoull(part.substr(power_index+1, part.length()-power_index-1));
        if(converted <= 0){
            SetStatusText("Power must be a positive integer", 0);
            return;
        }
        val2 *= pow(converted, power);
    }else{
        unsigned long long converted = custom_strtoull(part);
        if(converted <= 0){
            SetStatusText("Factor must be a positive integer", 0);
            return;
        }
        val2 *= converted;
    }

    long long x, y;
    first_print = true;
    unsigned long long g = gcdExtended(val2, val, &x, &y);
    EuclideanRichTextCtrl->AppendText(wxString::Format("gcd(%llu,%llu)=%llu", val, val2, g));
    if(g == 1){
        EuclideanRichTextCtrl->AppendText(wxString::Format("\nmultiplicative inverse of %llu modulo %llu: %lli", val, val2, y));
        EuclideanRichTextCtrl->AppendText(wxString::Format("\nmultiplicative inverse of %llu modulo %llu: %lli", val2, val, x));
    }
    SetStatusText("Success", 0);
}

void CS1231Frame::OnEvaluateBtnClick(wxCommandEvent& event){
    wxString input = ExpressionTextCtrl->GetValue();
    ExpressionRichTextCtrl->Clear();

    std::map<unsigned long long, unsigned long long> factors, factors2, factors3;
    bool success = evalFactorise(input, factors);
    if(!success){
        return;
    }

    wxString input2 = Expression2TextCtrl->GetValue();
    success = evalFactorise(input2, factors2);
    if(!success){
        return;
    }

    wxString input3 = ModulusTextCtrl->GetValue();
    ExpressionRichTextCtrl->WriteText(input + (wchar_t)8801 + input2 + " (mod " + input3 + " )\n");
    success = evalFactorise(input3, factors3);
    if(!success){
        return;
    }

    std::map<unsigned long long, unsigned long long>::iterator it3=factors3.begin();
    bool ended = false, cancellation = false;
    if(it3 != factors3.end()){
        for(std::map<unsigned long long, unsigned long long>::iterator it = factors.begin(); it != factors.end(); it++){
            while(!ended && it->first > it3->first){
                it3++;
                if(it3 == factors3.end()){
                    ended = true;
                }
            }
            if(ended || (it->first != it3->first && factors2.find(it->first) != factors2.end())){
                int min_factor = std::min(factors2[it->first], it->second);
                factors[it->first] = it->second - min_factor;
                factors2[it->first] = factors2[it->first] - min_factor;
                cancellation = true;
            }
        }
    }

    if(cancellation){
        wxString input_factored = "", input2_factored = "", input3_factored = "";
        for(std::map<unsigned long long, unsigned long long>::iterator it = factors.begin(); it != factors.end(); it++){
            if(it->second != 0){
                input_factored = input_factored + "*" + std::to_string(it->first) + convertSuperscript(it->second);
            }
        }
        for(std::map<unsigned long long, unsigned long long>::iterator it2 = factors2.begin(); it2 != factors2.end(); it2++){
            if(it2->second != 0){
                input2_factored = input2_factored + "*" + std::to_string(it2->first) + convertSuperscript(it2->second);
            }
        }
        for(std::map<unsigned long long, unsigned long long>::iterator it3 = factors3.begin(); it3 != factors3.end(); it3++){
            input3_factored = input3_factored + "*" + std::to_string(it3->first) + convertSuperscript(it3->second);
        }
        if(input_factored == ""){
            input_factored = " 1";
        }
        if(input2_factored == ""){
            input2_factored = " 1";
        }
        if(input3_factored == ""){
            input3_factored = " 1";
        }
        input_factored = input_factored.substr(1, input_factored.length()-1);
        input2_factored = input2_factored.substr(1, input2_factored.length()-1);
        input3_factored = input3_factored.substr(1, input3_factored.length()-1);
        ExpressionRichTextCtrl->WriteText(input_factored + (wchar_t)8801 + input2_factored + " (mod " + input3_factored + ") (Cancellation theorem)\n");
    }
    /*
    bool fermat = true;
    if(factors2.size() == 1){
        unsigned long long modu = 1;
        for(std::map<unsigned long long, int>::iterator it2 = factors2.begin(); it2 != factors2.end(); it2++){
            modu *= pow(it2->first, it2->second);
        }
        int min_power = INT_MAX;
        for(std::map<unsigned long long, int>::iterator it = factors.begin(); it != factors.end(); it++){
            if(min_power > it->second){
                min_power = it->second;
            }
        }
        for(std::map<unsigned long long, int>::iterator it = factors.begin(); it != factors.end(); it++){
            if(it->second % min_power != 0){
                fermat = false;
                break;
            }
        }
        if(fermat && min_power%(modu-1)==0 && min_power/(modu-1)>0){
            wxString input_factored = "";
            for(std::map<unsigned long long, int>::iterator it = factors.begin(); it != factors.end(); it++){
                input_factored = input_factored + "*" + std::to_string(it->first) + convertSuperscript(it->second/(modu-1));
            }
        }
        wxString input_factored = "";
        input_factored = input_factored.substr(1, input_factored.length()-1);
        ExpressionRichTextCtrl->WriteText(wxString::Format("=(%s)^%llu ", input_factored, modu));
        ExpressionRichTextCtrl->BeginUnderline();
        ExpressionRichTextCtrl->WriteText("mod");
        ExpressionRichTextCtrl->EndUnderline();
        ExpressionRichTextCtrl->WriteText(wxString::Format(" %llu (Fermat's little theorem)\n", modu));
    }
    */
    SetStatusText("Success", 0);
}

int buildUtilPost(wxString in, wxString post, std::vector<char> &tree, int rootIndex, int height=0){
    tree[rootIndex] = post[post.length() - 1];
    if(post.length()==1){
        return (height+1);
    }

    int i;
    bool absent = true;
    for (i = 0; i < (int)in.length(); i++) {
        if (in[i] == tree[rootIndex]){
            absent = false;
            break;
        }
    }
    if(absent){
        return -1;
    }
    int height1=0, height2=0;
    if(i>0){
        height1 = buildUtilPost(in.substr(0,i), post.substr(0,i), tree, 2*rootIndex+1);
    }
    if(i<(int)in.length()-1){
        height2 = buildUtilPost(in.substr(i+1, in.length()-i-1), post.substr(i, in.length()-i-1), tree, 2*rootIndex+2);
    }
    return (std::max(height1,height2)+1);
}

int buildUtilPre(wxString in, wxString pre, std::vector<char> &tree, int rootIndex, int height=0){
    tree[rootIndex] = pre[0];
    if(pre.length()==1){
        return (height+1);
    }

    int i;
    bool absent = true;
    for (i = 0; i < (int)in.length(); i++) {
        if (in[i] == tree[rootIndex]){
            absent = false;
            break;
        }
    }
    if(absent){
        return -1;
    }
    int height1=0, height2=0;
    if(i>0){
        height1 = buildUtilPre(in.substr(0,i), pre.substr(1,i), tree, 2*rootIndex+1);
    }
    if(i<(int)in.length()-1){
        height2 = buildUtilPre(in.substr(i+1, in.length()-i-1), pre.substr(i+1, in.length()-i-1), tree, 2*rootIndex+2);
    }
    return (std::max(height1,height2)+1);
}

int buildUtilRandomPre(wxString pre, std::vector<char> &tree, int rootIndex, int height=0){
    tree[rootIndex] = pre[0];
    if(pre.length()==1){
        return (height+1);
    }
    int i = floor((pre.length() - 1)/2);

    int height1=0, height2=0;
    if(i>0){
        height1 = buildUtilRandomPre(pre.substr(1,i), tree, 2*rootIndex+1);
    }
    if(i<(int)pre.length()-1){
        height2 = buildUtilRandomPre(pre.substr(i+1, pre.length()-i-1), tree, 2*rootIndex+2);
    }
    return (std::max(height1,height2)+1);
}

int buildUtilRandomPost(wxString post, std::vector<char> &tree, int rootIndex, int height=0){
    tree[rootIndex] = post[post.length() - 1];
    if(post.length()==1){
        return (height+1);
    }
    int i = floor((post.length() - 1)/2);

    int height1=0, height2=0;
    if(i>0){
        height1 = buildUtilRandomPost(post.substr(0,i), tree, 2*rootIndex+1);
    }
    if(i<(int)post.length()-1){
        height2 = buildUtilRandomPost(post.substr(i, post.length()-i-1), tree, 2*rootIndex+2);
    }
    return (std::max(height1,height2)+1);
}

wxString getPostOrder(std::vector<char> &tree, int rootIndex=0){
    if (rootIndex>=(int)tree.size() || tree[rootIndex]==' ')
        return "";
    wxString order="";
    order+=getPostOrder(tree, rootIndex*2+1);
    order+=getPostOrder(tree, rootIndex*2+2);
    order+=tree[rootIndex];
    return order;
}

wxString getInOrder(std::vector<char> &tree, int rootIndex=0){
    if (rootIndex>=(int)tree.size() || tree[rootIndex]==' ')
        return "";
    wxString order="";
    order+=getInOrder(tree, rootIndex*2+1);
    order+=tree[rootIndex];
    order+=getInOrder(tree, rootIndex*2+2);
    return order;
}

wxString getPreOrder(std::vector<char> &tree, int rootIndex=0){
    if (rootIndex>=(int)tree.size() || tree[rootIndex]==' ')
        return "";
    wxString order="";
    order+=tree[rootIndex];
    order+=getPreOrder(tree, rootIndex*2+1);
    order+=getPreOrder(tree, rootIndex*2+2);
    return order;
}

void CS1231Frame::OnComputeOrderBtnClick(wxCommandEvent& event){
    SetStatusText("", 0);
    wxString pre = PreOrderTextCtrl->GetValue();
    wxString in = InOrderTextCtrl->GetValue();
    in.Replace(",","",true);
    in.Replace(" ","",true);
    int n = in.length();
    bool uniq = true;
    if(n==0){
        SetStatusText("Inorder is not filled, tree may not be unique", 0);
        uniq = false;
    }

    std::vector<char> tree(pow(2,n), ' ');
    int height;
    if(pre==""){
        wxString post = PostOrderTextCtrl->GetValue();
        post.Replace(",","",true);
        post.Replace(" ","",true);
        if(uniq){
            height = buildUtilPost(in, post, tree, 0);
            if (post!=getPostOrder(tree)||in!=getInOrder(tree)){
                SetStatusText("Invalid input", 0);
                return;
            }
        }else{
            if(post.length()==0){
                SetStatusText("2 of 3 fields must be filled", 0);
                return;
            }
            tree.resize(pow(2,post.length()), ' ');
            height = buildUtilRandomPost(post, tree, 0);
            if (post!=getPostOrder(tree)){
                SetStatusText("Invalid input", 0);
                return;
            }
        }
    }else{
        pre.Replace(",","",true);
        pre.Replace(" ","",true);
        if(uniq){
            height = buildUtilPre(in, pre, tree, 0);
            if (height == -1||pre!=getPreOrder(tree)||in!=getInOrder(tree)){
                SetStatusText("Invalid input", 0);
                return;
            }
        }else{
            tree.resize(pow(2,pre.length()), ' ');
            height = buildUtilRandomPre(pre, tree, 0);
            if (height == -1||pre!=getPreOrder(tree)){
                SetStatusText("Invalid input", 0);
                return;
            }
        }
    }

    wxString printedTree="";
    for(int ii=0;ii<height;ii++){
        wxString comb="";
        for(int iii=0;iii<pow(2,ii);iii++){
            comb+=wxString(pow(2,height-ii+1)-1, ' ');
            if(tree[(int)pow(2,ii)+iii-1]==' '){
                comb+="-";
            }else{
                comb+=tree[(int)pow(2,ii)+iii-1];
            }
        }
        comb=comb.substr(pow(2,height-ii+1)-1);
        printedTree+=wxString(pow(2,height-ii)-1, ' ')+comb+wxString(pow(2,height-ii)-1, ' ')+"\n";
    }
    TreeRichTextCtrl->Clear();
    wxArrayString arr = wxFontEnumerator().GetFacenames(wxFONTENCODING_SYSTEM, true);
    wxFont font = wxFont(16, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    font.SetFaceName(arr[0]);
    TreeRichTextCtrl->SetFont(font);
    if(uniq){
        if(pre==""){
            TreeRichTextCtrl->AppendText("Unique binary tree built with post-order and in-order\n");
        }else{
            TreeRichTextCtrl->AppendText("Unique binary tree built with pre-order and in-order\n");
        }
    }else{
        if(pre==""){
            TreeRichTextCtrl->AppendText("Possibly non-unique binary tree built with post-order\n");
        }else{
            TreeRichTextCtrl->AppendText("Possibly non-unique binary tree built with pre-order\n");
        }
    }
    TreeRichTextCtrl->AppendText(printedTree);
}

void CS1231Frame::OnSetGridBtnClick(wxCommandEvent& event){
    SetStatusText("", 0);
    bool success = false;
    int n = custom_strtol(RowsTextCtrl->GetValue(), success);
    if (!success) {
        SetStatusText("Cannot interpret no. of rows/columns", 0);
        return;
    }
    if(n<1){
        SetStatusText("Minimum no. of rows/columns=1", 0);
        return;
    }

    if(n>MatrixGrid->GetNumberCols()){
        MatrixGrid->AppendCols(n-MatrixGrid->GetNumberCols());
    }else if(n<MatrixGrid->GetNumberCols()){
        MatrixGrid->DeleteCols(0, MatrixGrid->GetNumberCols()-n);
    }
    if(n>MatrixGrid->GetNumberRows()){
        MatrixGrid->AppendRows(n-MatrixGrid->GetNumberRows());
    }else if(n<MatrixGrid->GetNumberRows()){
        MatrixGrid->DeleteRows(0, MatrixGrid->GetNumberRows()-n);
    }
}

void CS1231Frame::OnClearMatrixBtnClick(wxCommandEvent& event){
    SetStatusText("", 0);
    int answer = wxMessageBox("Are you sure of clearing the matrix?", "Confirm",
                              wxYES_NO | wxCANCEL);
    if (answer == wxYES){
        int n = MatrixGrid->GetNumberCols();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                MatrixGrid->SetCellValue(i,j,"");
            }
        }
    }
}

void CS1231Frame::OnMakeSymmetricBtnClick(wxCommandEvent& event){
    SetStatusText("", 0);
    int n = MatrixGrid->GetNumberCols();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(MatrixGrid->GetCellValue(i,j)==""){
                MatrixGrid->SetCellValue(i, j, MatrixGrid->GetCellValue(j,i));
            }else{
                MatrixGrid->SetCellValue(j, i, MatrixGrid->GetCellValue(i,j));
            }
        }
    }
}

void CS1231Frame::OnLabelsBtnClick(wxCommandEvent& event){
    SetStatusText("", 0);
    wxString labels = LabelsTextCtrl->GetValue();
    labels.Replace(",","",true);
    labels.Replace(" ","",true);

    int n = labels.length();
    if(n<=0){
        SetStatusText("Labels must be non-empty", 0);
        return;
    }
    if(n>MatrixGrid->GetNumberCols()){
        MatrixGrid->AppendCols(n-MatrixGrid->GetNumberCols());
    }else if(n<MatrixGrid->GetNumberCols()){
        MatrixGrid->DeleteCols(0, MatrixGrid->GetNumberCols()-n);
    }
    if(n>MatrixGrid->GetNumberRows()){
        MatrixGrid->AppendRows(n-MatrixGrid->GetNumberRows());
    }else if(n<MatrixGrid->GetNumberRows()){
        MatrixGrid->DeleteRows(0, MatrixGrid->GetNumberRows()-n);
    }
    std::vector<wxString> newLabels;
    for(int i = 0; i < n; i++){
        MatrixGrid->SetRowLabelValue(i, labels.substr(i,1));
        MatrixGrid->SetColLabelValue(i, labels.substr(i,1));
        newLabels.push_back(labels.substr(i,1));
    }
    vertice_labels = newLabels;
}

void CS1231Frame::OnFillEmptyBtnClick(wxCommandEvent& event){
    int n = MatrixGrid->GetNumberCols();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(MatrixGrid->GetCellValue(i,j)==""){
                MatrixGrid->SetCellValue(i, j,"0");
            }
        }
    }
}

int determinantOfMatrix(int** mat, int n){
    int D = 0;
    if (n == 1){
        return mat[0][0];
    }

    int** temp= new int *[n-1];
    for(int i = 0; i <n-1; i++){
        temp[i] = new int[n-1];
    }
    int sign = 1;

    for (int f = 0; f < n; f++){
        int i = 0, j = 0;
        for (int row = 0; row < n; row++){
            for (int col = 0; col < n; col++) {
                if (row != 0 && col != f){
                    temp[i][j++] = mat[row][col];
                    if (j == n - 1){
                        j = 0;
                        i++;
                    }
                }
            }
        }
        D += sign * mat[0][f] * determinantOfMatrix(temp, n-1);
        sign = -sign;
    }
    for(int i = 0; i < n-1; i++){
        delete temp[i];
    }
    delete[] temp;
    return D;
}

void CS1231Frame::OnDeterminantBtnClick(wxCommandEvent& event){
    SetStatusText("", 0);
    int n = MatrixGrid->GetNumberCols();
    int** mat= new int *[n];
    for(int i = 0; i <n; i++){
        mat[i] = new int[n];
    }
    bool success = false;
    for(int i=0;i<n;i++){
        for(int ii=0;ii<n;ii++){
            mat[i][ii] = custom_strtol(MatrixGrid->GetCellValue(i,ii), success);
            if (!success) {
                SetStatusText(wxString::Format("Cannot interpret cell at row %i and column %i as integer",i,ii), 0);
                return;
            }
        }
    }

    int determinant = determinantOfMatrix(mat, n);
    for(int i = 0; i <n; i++){
        delete mat[i];
    }
    delete[] mat;
    DeterminantTextCtrl->Clear();
    DeterminantTextCtrl->AppendText(wxString::Format("%i", determinant));
}

void powMatrices(int** mat, int** mat2, int** mult, int n, int pow){
    if(pow == 1){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                mult[i][j] = mat2[i][j];
            }
        }
        return;
    }
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
            mult[i][j] = 0;
			for(int k=0; k<n; k++){
				mult[i][j] += mat[i][k] * mat2[k][j];
			}
		}
	}
	for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            mat2[i][j] = mult[i][j];
        }
    }
	powMatrices(mat, mat2, mult, n, pow-1);
}

void CS1231Frame::getRoutes(int** mat, std::list<wxString> &routes_list, std::list<int> &lastNode, int n, int length, int from, int to){
    int** mult= new int *[n];
    for(int i = 0; i <n; i++){
        mult[i] = new int[n];
    }
    int** mat2= new int *[n];
    for(int i = 0; i <n; i++){
        mat2[i] = new int[n];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            mat2[i][j] = mat[i][j];
        }
    }
    powMatrices(mat, mat2, mult, n, length);

    if(from==-1){
        if(length == 1 and to != -1){
            for(int i = 0; i<n; i++){
                for(int k=0;k<mat[i][to];k++){
                    routes_list.push_back(wxString::Format("%s e%i %s",vertice_labels[i],k+1,vertice_labels[to]));
                    lastNode.push_back(to);
                }
            }
        }else{
            for(int i = 0; i<n; i++){
                for(int j = i; j<n; j++){
                    for(int k=0;k<mat[i][j];k++){
                        routes_list.push_back(wxString::Format("%s e%i %s",vertice_labels[i],k+1,vertice_labels[j]));
                        lastNode.push_back(j);
                    }
                }
            }
        }
    }else{
        if(length == 1 and to != -1){
            for(int k=0;k<mat[from][to];k++){
                routes_list.push_back(wxString::Format("%s e%i %s",vertice_labels[from],k+1,vertice_labels[to]));
                lastNode.push_back(to);
            }
        }else{
            for(int j = 0; j<n; j++){
                for(int k=0;k<mat[from][j];k++){
                    routes_list.push_back(wxString::Format("%s e%i %s",vertice_labels[from],k+1,vertice_labels[j]));
                    lastNode.push_back(j);
                }
            }
        }
    }

    for(int l=1;l<length;l++){
        int ori_list_size = routes_list.size();
        int cnt = 0;

        std::list<int>::iterator it2 = lastNode.begin();
        for(std::list<wxString>::iterator it=routes_list.begin();;it++){
            if(cnt==ori_list_size){
                break;
            }
            cnt++;
            int vertice_idx = *it2;
            if(to != -1 && l == length-1){
                for(int k = 0; k<mat[vertice_idx][to]; k++){
                    routes_list.push_back(wxString::Format("%s e%i %s",*it,k+1,vertice_labels[to]));
                    lastNode.push_back(to);
                }
            }else{
                for(int j = 0; j<n; j++){
                    for(int k = 0; k<mat[vertice_idx][j]; k++){
                        routes_list.push_back(wxString::Format("%s e%i %s",*it,k+1,vertice_labels[j]));
                        lastNode.push_back(j);
                    }
                }
            }
            it2++;
        }
        std::list<wxString>::iterator itr_end = routes_list.begin();
        advance(itr_end, ori_list_size);
        routes_list.erase(routes_list.begin(), itr_end);

        std::list<int>::iterator itr_end2 = lastNode.begin();
        advance(itr_end2, ori_list_size);
        lastNode.erase(lastNode.begin(), itr_end2);
    }

    RoutesRichTextCtrl->Clear();
    RoutesRichTextCtrl->AppendText(wxString::Format("Adjacency matrix^%i\n", length));
    int maxi = 0;
    for(int i = 0; i <n; i++){
        for(int j = 0; j <n; j++){
            if(mult[i][j]>maxi){
                maxi = mult[i][j];
            }
        }
    }
    wxString printed_mat = "";
    int padding = floor(log10(maxi))+1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            std::string s = std::to_string(mult[i][j]);
            if(padding - s.length() > 0){
                s.insert(0, padding - s.length(), ' ');
            }
            printed_mat += (" " + s);
        }
        printed_mat += "\n";
    }
    RoutesRichTextCtrl->AppendText(printed_mat);

    for(int i = 0; i <n; i++){
        delete mult[i];
    }
    delete[] mult;
    for(int i = 0; i <n; i++){
        delete mat2[i];
    }
    delete[] mat2;
}

void isConnected(int** mat, std::vector<bool> &connected, int start=0){
    connected[start]=true;
    for(int i = 0; i < (int)connected.size(); i++){
        if(mat[start][i]>0 && !connected[i]){
            connected[i]=true;
            isConnected(mat, connected, i);
        }
    }
}

void CS1231Frame::getEulerTrail_(int** mat, std::list<wxString> &routes_list, int n, int num_edges, int start, int finish, wxString current_route){
    for(int j = 0; j < n; j++){
        int** mt= new int *[n];
        for(int i = 0; i <n; i++){
            mt[i] = new int[n];
        }

        for(int i = 0; i < n; i++){
            for(int jj = 0; jj < n; jj++){
                mt[i][jj] = mat[i][jj];
            }
        }
        mt[start][j]-=1;
        mt[j][start]-=1;

        for(int k = 0; k < mat[start][j]; k++){
            if(num_edges == 1){
                if(j == finish){
                    routes_list.push_back(wxString::Format("%s e%i %s", current_route, k+1, vertice_labels[j]));
                }else{
                    break;
                }
            }else{
                CS1231Frame::getEulerTrail_(mt, routes_list, n, num_edges-1, j, finish, wxString::Format("%s e%i %s", current_route, k+1, vertice_labels[j]));
            }
        }
        for(int i = 0; i <n; i++){
            delete mt[i];
        }
        delete[] mt;
    }
}

void CS1231Frame::getEulerTrail(int** mat, std::list<wxString> &routes_list, int n){
    if(n==1){
        routes_list.push_back(vertice_labels[0]);
        return;
    }

    int num_edges = 0;
    std::vector<int> degrees(n,0);
    int odd_cnt = 0;
    std::vector<int> pts(3,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            num_edges+=mat[i][j];
            if(i==j){
                degrees[i]+=2*mat[i][i];
            }else{
                degrees[i]+=mat[i][j];
            }
        }
        if(degrees[i]%2==1){
            pts[odd_cnt]=i;
            odd_cnt++;
            if(odd_cnt==3){
                SetStatusText(wxString::Format("More than 2 vertices have odd degrees (maximum of 3 is listed):%s,%s,%s",
                                                vertice_labels[pts[0]], vertice_labels[pts[1]], vertice_labels[pts[2]]), 0);
                return;
            }
        }
    }
    if(odd_cnt<2){
        SetStatusText("Less than 2 vertices have odd degrees", 0);
        return;
    }
    getEulerTrail_(mat, routes_list, n, num_edges, pts[0], pts[1], vertice_labels[pts[0]]);
}

void CS1231Frame::getEulerCircuit(int** mat, std::list<wxString> &routes_list, int n){
    if(n==1){
        routes_list.push_back(vertice_labels[0]);
        return;
    }

    int num_edges = 0;
    std::vector<int> degrees(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                num_edges+=mat[i][j];
            }
            if(i==j){
                degrees[i]+=2*mat[i][i];
            }else{
                degrees[i]+=mat[i][j];
            }
        }
        if(degrees[i]%2==1){
            SetStatusText(wxString::Format("Vertice %s have odd degree (only 1 is listed):", vertice_labels[i]), 0);
            return;
        }
    }
    getEulerTrail_(mat, routes_list, n, num_edges, 0, 0, vertice_labels[0]);
}

void CS1231Frame::getHamiltonianCircuit(int** mat, std::list<wxString> &routes_list, int n, int num_vertices, int start, int finish, wxString current_route){
    for(int j = 0; j < n; j++){
        if(num_vertices != n && j == finish){
            continue;
        }
        int** mt= new int *[n];
        for(int i = 0; i <n; i++){
            mt[i] = new int[n];
        }

        for(int i = 0; i < n; i++){
            for(int jj = 0; jj < n; jj++){
                if(jj == start && start != finish){
                    mt[i][start] = 0;
                }else if(i == start){
                    mt[start][jj] = 0;
                }else{
                    mt[i][jj] = mat[i][jj];
                }
            }
        }
        for(int k = 0; k < mat[start][j]; k++){
            if(num_vertices == n){
                if(j == finish){
                    routes_list.push_back(wxString::Format("%s e%i %s", current_route, k+1, vertice_labels[j]));
                }else{
                    break;
                }
            }else{
                CS1231Frame::getHamiltonianCircuit(mt, routes_list, n, num_vertices+1, j, finish, wxString::Format("%s e%i %s", current_route, k+1, vertice_labels[j]));
            }
        }
        for(int i = 0; i <n; i++){
            delete mt[i];
        }
        delete[] mt;
    }
}


void CS1231Frame::OnRoutesBtnClick(wxCommandEvent& event){
    SetStatusText("", 0);
    /*
    int mt[4][4]={{0,1,0,1},{1,0,1,2},{0,1,1,1},{1,2,1,0}};
    for(int i = 0; i <4; i++){
        for(int j = 0; j <4; j++){
            MatrixGrid->SetCellValue(i,j,wxString::Format("%i", mt[i][j]));
        }
    }
    */
    /*
    int mt[6][6]={{0,1,0,0,0,1},{1,0,1,1,1,0},{0,1,0,1,1,1},{0,1,1,0,1,1},{0,1,1,1,0,1},{1,0,1,1,1,0}};
    for(int i = 0; i <6; i++){
        for(int j = 0; j <6; j++){
            MatrixGrid->SetCellValue(i,j,wxString::Format("%i", mt[i][j]));
        }
    }
    */

    int n = MatrixGrid->GetNumberCols();
    int** mat= new int *[n];
    for(int i = 0; i <n; i++){
        mat[i] = new int[n];
    }
    bool success = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j] = custom_strtol(MatrixGrid->GetCellValue(i,j), success);
            if (!success) {
                SetStatusText(wxString::Format("Cannot interpret cell at row %i and column %i as integer",i,j), 0);
                return;
            }
        }
    }

    std::list<wxString> routes_list;
    RoutesRichTextCtrl->Clear();
    wxFont font = wxFont(16, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    RoutesRichTextCtrl->SetFont(font);
    if(RoutesRadioBox->GetSelection()==0){
        bool success = false;
        int length = custom_strtol(RoutesTextCtrl->GetValue(), success);
        if (!success) {
            SetStatusText("Cannot interpret length of random walk", 0);
            return;
        }
        if(length<1){
            SetStatusText("The length of random walk should be at least 1", 0);
            return;
        }

        int from = -2;
        wxString from_str = FromTextCtrl->GetValue();
        if(from_str=="-1"){
            from = -1;
        }else{
            for(int i = 0; i<(int)vertice_labels.size(); i++){
                if(from_str == vertice_labels[i]){
                    from = i;
                }
            }
        }
        if(from == -2){
             SetStatusText("'from' is neither found in labels nor set to -1 for all", 0);
             return;
        }

        int to = -2;
        wxString to_str = ToTextCtrl->GetValue();
        if(to_str=="-1"){
            to = -1;
        }else{
            for(int i = 0; i<(int)vertice_labels.size(); i++){
                if(to_str == vertice_labels[i]){
                    to = i;
                }
            }
        }
        if(to == -2){
             SetStatusText("'to' is neither found in labels nor set to -1 for all", 0);
             return;
        }

        std::list<int>lastNode;
        CS1231Frame::getRoutes(mat, routes_list, lastNode, n, length, from, to);
    }else if(RoutesRadioBox->GetSelection()==1){
        //Euler trail
        std::vector<bool> connected(n,false);
        isConnected(mat, connected);
        for(int i = 0; i < (int)connected.size(); i++){
            if(!connected[i]){
                SetStatusText("No possible Euler's trail for an unconnected graph", 0);
                return;
            }
        }
        CS1231Frame::getEulerTrail(mat, routes_list, n);
    }else if(RoutesRadioBox->GetSelection()==2){
        //Euler circuit
        std::vector<bool> connected(n,false);
        isConnected(mat, connected);
        for(int i = 0; i < (int)connected.size(); i++){
            if(!connected[i]){
                SetStatusText("No possible Euler's circuit for an unconnected graph", 0);
                return;
            }
        }
        CS1231Frame::getEulerCircuit(mat, routes_list, n);
    }else if(RoutesRadioBox->GetSelection()==3){
        //Hamiltonian circuit
        std::vector<bool> connected(n,false);
        isConnected(mat, connected);
        for(int i = 0; i < (int)connected.size(); i++){
            if(!connected[i]){
                SetStatusText("No possible Hamiltonian circuit for an unconnected graph", 0);
                return;
            }
        }
        getHamiltonianCircuit(mat, routes_list, n, 1, 0, 0, vertice_labels[0]);
    }

    for(int i = 0; i <n; i++){
        delete mat[i];
    }
    delete[] mat;

    RoutesRichTextCtrl->AppendText(wxString::Format("No. of walks (circuits are fixed to start at the first vertice):%i\n", (int)routes_list.size()));
    for(std::list<wxString>::iterator it=routes_list.begin();it!=routes_list.end();it++){
        RoutesRichTextCtrl->AppendText((*it)+"\n");
    }
}
