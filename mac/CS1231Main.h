/***************************************************************
 * Name:      CS1231Main.h
 * Purpose:   Defines Application Frame
 * Author:    Mark ()
 * Created:   2020-10-07
 * Copyright: Mark ()
 * License:
 **************************************************************/

#ifndef CS1231MAIN_H
#define CS1231MAIN_H

//(*Headers(CS1231Frame)
#include "mathplot.h"
#include "wx/button.h"
#include "wx/checkbox.h"
#include "wx/frame.h"
#include "wx/grid.h"
#include "wx/menu.h"
#include "wx/notebook.h"
#include "wx/panel.h"
#include "wx/radiobox.h"
#include "wx/richtext/richtextctrl.h"
#include "wx/stattext.h"
#include "wx/statusbr.h"
#include "wx/textctrl.h"
#include "wx/fontenum.h"
//*)
#include "stdc++.h"
#include "exprtk.hpp"

class CS1231Frame: public wxFrame
{
    public:

        CS1231Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~CS1231Frame();
        void initialise();
        bool isOperator(wchar_t ch);
        wxString nicePrint(wxString str);
        wxString printInfix(std::queue<wxString>& step_queue, std::stack<wxString>& step_stack, std::set<wxString>& reasons, bool verbose=true);
        wxString trimBrackets(wxString str, bool last=false);
        void splitTokens(wxString str, wxString opw, std::list<wxString>& tokens);
        void splitTokens(wxString str, wchar_t op, std::list<wxString>& tokens);
        wxString join(std::list<wxString> tokens, wxString delimiterw);
        wxString join(std::list<wxString> tokens, wchar_t delimiter);
        bool containOps(wxString str);
        void expressionValue(wxString str, wxString initial='?', bool distributive = false);
        void tableValue(wxString str);
        int val(char c);
        char reVal(int num);
        void primeFactorise(unsigned long long in, std::map<unsigned long long,unsigned long long>& factors, unsigned long long power=1);
        bool evalFactorise(wxString input, std::map<unsigned long long,unsigned long long>& factors);
        wxString convertSuperscript(unsigned long long num);
        unsigned long long gcdExtended(unsigned long long a, unsigned long long b, long long *x, long long *y);
        void getRoutes(int** mat, std::list<wxString> &routes_list, std::list<int> &lastNode, int n, int length, int from=-1, int to=-1);
        void getEulerTrail_(int** mat, std::list<wxString> &routes_list, int n, int num_edges, int start, int finish, wxString current_route="");
        void getEulerTrail(int** mat, std::list<wxString> &routes_list, int n);
        void getEulerCircuit(int** mat, std::list<wxString> &routes_list, int n);
        void getHamiltonianCircuit(int** mat, std::list<wxString> &routes_list, int n, int num_vertices, int start = 0, int finish = 0, wxString current_route="");

    private:

        //(*Handlers(CS1231Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnAndBtnClick(wxCommandEvent& event);
        void OnOrBtnClick(wxCommandEvent& event);
        void OnNegateBtnClick(wxCommandEvent& event);
        void OnImplyBtnClick(wxCommandEvent& event);
        void OnComputeBtnClick(wxCommandEvent& event);
        void OnNotebookPageChanged(wxNotebookEvent& event);
        void OnClearBtnClick(wxCommandEvent& event);
        void OnLogicPanelMouseEnter(wxMouseEvent& event);
        void OnPlotBtnClick(wxCommandEvent& event);
        void OnGraphMathPlotLeftDown(wxMouseEvent& event);
        void OnGraphPanelMouseMove(wxMouseEvent& event);
        void OnGraphPanelLeftUp(wxMouseEvent& event);
        void OnConvertBtnClick(wxCommandEvent& event);
        void OnFactoriseBtnClick(wxCommandEvent& event);
        void OnLCMBtnClick(wxCommandEvent& event);
        void OnGCDBtnClick(wxCommandEvent& event);
        void OnSwapBtnClick(wxCommandEvent& event);
        void OnGCDEuclideanBtnClick(wxCommandEvent& event);
        void OnEvaluateBtnClick(wxCommandEvent& event);
        void OnFibonnacciBtnClick(wxCommandEvent& event);
        void OnPiecewiseBtnClick(wxCommandEvent& event);
        void OnPolynomialBtnClick(wxCommandEvent& event);
        void OnFloorBtnClick(wxCommandEvent& event);
        void OnComputeOrderBtnClick(wxCommandEvent& event);
        void OnDeterminantBtnClick(wxCommandEvent& event);
        void OnSetGridBtnClick(wxCommandEvent& event);
        void OnRoutesBtnClick(wxCommandEvent& event);
        void OnClearMatrixBtnClick(wxCommandEvent& event);
        void OnMakeSymmetricBtnClick(wxCommandEvent& event);
        void OnLabelsBtnClick(wxCommandEvent& event);
        void OnFillEmptyBtnClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(CS1231Frame)
        static const int ID_LOGICTEXTCTRL;
        static const int ID_ANDBTN;
        static const int ID_ORBTN;
        static const int ID_COMPUTEBTN;
        static const int ID_EQUATIONRICHTEXTCTRL;
        static const int ID_NEGATEBTN;
        static const int ID_IMPLYBTN;
        static const int ID_CLEARBTN;
        static const int ID_LOGICGRID;
        static const int ID_LOGICPANEL;
        static const int ID_INPUTTEXTCTRL;
        static const int ID_CONVERTBTN;
        static const int ID_OUTPUTBASETEXTCTRL;
        static const int ID_BASETEXTCTRL;
        static const int ID_INPUTFACTORISETEXTCTRL;
        static const int ID_FACTORISEBTN;
        static const int ID_OUTPUTFACTORISETEXTCTRL;
        static const int ID_INPUT2FACTORISETEXTCTRL;
        static const int ID_LCMBTN;
        static const int ID_GCFBTN;
        static const int ID_OUTPUT2FACOTRISETEXTCTRL;
        static const int ID_SWAPBTN;
        static const int ID_EUCLIDEANRICHTEXTCTRL;
        static const int ID_EUCLIDEANLBL;
        static const int ID_EUCLIDEANBTN;
        static const int ID_EXPRESSIONTEXTCTRL;
        static const int ID_EVALUATEBTN;
        static const int ID_EXPRESSIONRICHTEXTCTRL;
        static const int ID_MODULUSTEXTCTRL;
        static const int ID_MODULUSLBL;
        static const int ID_EXPRESSION2TEXTCTRL;
        static const int ID_EQUIVALENTLBL;
        static const int ID_PANEL2;
        static const int ID_GRAPHTEXTCTRL;
        static const int ID_GRAPHMATHPLOT;
        static const int ID_PLOTBTN;
        static const int ID_RANGEXLBL;
        static const int ID_RANGEXTEXTCTRL;
        static const int ID_XINTEGERCHKBOX;
        static const int ID_NOOFPOINTSLBL;
        static const int ID_NOOFPOINTSTEXTCTRL;
        static const int ID_OPERATORSLBL;
        static const int ID_FUNCTIONLBL;
        static const int ID_TRIGOLBL;
        static const int ID_INEQUALITYLBL;
        static const int ID_LOGICALLBL;
        static const int ID_EXAMPLESLBL;
        static const int ID_FIBONNACCIBTN;
        static const int ID_PIECEWISEBTN;
        static const int ID_POLYNOMIALBTN;
        static const int ID_FLOORBTN;
        static const int ID_GRAPHPANEL;
        static const int ID_INORDERTEXTCTRL;
        static const int ID_POSTORDERTEXTCTRL;
        static const int ID_PREORDERTEXTCTRL;
        static const int ID_PREORDERLBL;
        static const int ID_INORDERLBL;
        static const int ID_POSTORDERLBL;
        static const int ID_COMPUTEORDERBTN;
        static const int ID_TREERICHTEXTCTRL;
        static const int ID_TREEPANEL;
        static const int ID_MATRIXGRID;
        static const int ID_DETERMINANTBTN;
        static const int ID_DETERMINANTTEXTCTRL;
        static const int ID_ROWSLBL;
        static const int ID_ROWSTEXTCTRL;
        static const int ID_SETGRIDBTN;
        static const int ID_ROUTESBTN;
        static const int ID_ROUTESRICHTEXTCTRL;
        static const int ID_ROUTESTEXTCTRL;
        static const int ID_LENGTHLBL;
        static const int ID_FROMLBL;
        static const int ID_TOLBL;
        static const int ID_FROMTEXTCTRL;
        static const int ID_TOTEXTCTRL;
        static const int ID_ROUTESRADIOBOX;
        static const int ID_CLEARMATRIXBTN;
        static const int ID_MAKESYMMETRICBTN;
        static const int ID_LABELSBTN;
        static const int ID_STATICTEXT1;
        static const int ID_LABELSTEXTCTRL;
        static const int ID_FILLEMPTYBTN;
        static const int ID_GRAPH2PANEL;
        static const int ID_NOTEBOOK;
        static const int idMenuQuit;
        static const int idMenuAbout;
        static const int ID_MAINSTATUSBAR;
        //*)

        //(*Declarations(CS1231Frame)
        mpWindow* GraphMathPlot;
        wxButton* AndBtn;
        wxButton* ClearBtn;
        wxButton* ClearMatrixBtn;
        wxButton* ComputeBtn;
        wxButton* ComputeOrderBtn;
        wxButton* ConvertBtn;
        wxButton* DeterminantBtn;
        wxButton* EvaluateBtn;
        wxButton* FactoriseBtn;
        wxButton* FibonnacciBtn;
        wxButton* FillEmptyBtn;
        wxButton* FloorBtn;
        wxButton* GCDBtn;
        wxButton* GCDEuclideanBtn;
        wxButton* ImplyBtn;
        wxButton* LCMBtn;
        wxButton* LabelsBtn;
        wxButton* MakeSymmetricBtn;
        wxButton* NegateBtn;
        wxButton* OrBtn;
        wxButton* PiecewiseBtn;
        wxButton* PlotBtn;
        wxButton* PolynomialBtn;
        wxButton* RoutesBtn;
        wxButton* SetGridBtn;
        wxButton* SwapBtn;
        wxCheckBox* XIntegerChkBox;
        wxGrid* LogicGrid;
        wxGrid* MatrixGrid;
        wxNotebook* Notebook;
        wxPanel* Graph2Panel;
        wxPanel* GraphPanel;
        wxPanel* LogicPanel;
        wxPanel* ModuloPanel;
        wxPanel* TreePanel;
        wxRadioBox* RoutesRadioBox;
        wxRichTextCtrl* EquationRichTextCtrl;
        wxRichTextCtrl* EuclideanRichTextCtrl;
        wxRichTextCtrl* ExpressionRichTextCtrl;
        wxRichTextCtrl* RoutesRichTextCtrl;
        wxRichTextCtrl* TreeRichTextCtrl;
        wxStaticText* EquivalentLbl;
        wxStaticText* EuclideanLbl;
        wxStaticText* ExamplesLbl;
        wxStaticText* FromLbl;
        wxStaticText* FunctionLbl;
        wxStaticText* InOrderLbl;
        wxStaticText* InequalityLbl;
        wxStaticText* LengthLbl;
        wxStaticText* LogicalLbl;
        wxStaticText* ModulusLbl;
        wxStaticText* NoOfPointsLbl;
        wxStaticText* OperatorsLbl;
        wxStaticText* PostOrderLbl;
        wxStaticText* PreorderLbl;
        wxStaticText* RangeXLbl;
        wxStaticText* RowsLbl;
        wxStaticText* StaticText1;
        wxStaticText* ToLbl;
        wxStaticText* TrigoLbl;
        wxStatusBar* MainStatusBar;
        wxTextCtrl* BaseTextCtrl;
        wxTextCtrl* DeterminantTextCtrl;
        wxTextCtrl* Expression2TextCtrl;
        wxTextCtrl* ExpressionTextCtrl;
        wxTextCtrl* FromTextCtrl;
        wxTextCtrl* GraphTextCtrl;
        wxTextCtrl* InOrderTextCtrl;
        wxTextCtrl* Input2FactoriseTextCtrl;
        wxTextCtrl* InputBaseTextCtrl;
        wxTextCtrl* InputFactoriseTextCtrl;
        wxTextCtrl* LabelsTextCtrl;
        wxTextCtrl* LogicTextCtrl;
        wxTextCtrl* ModulusTextCtrl;
        wxTextCtrl* NoOfPointsTextCtrl;
        wxTextCtrl* Output2FactoriseTextCtrl;
        wxTextCtrl* OutputBaseTextCtrl;
        wxTextCtrl* OutputFactoriseTextCtrl;
        wxTextCtrl* PostOrderTextCtrl;
        wxTextCtrl* PreOrderTextCtrl;
        wxTextCtrl* RangeXTextCtrl;
        wxTextCtrl* RoutesTextCtrl;
        wxTextCtrl* RowsTextCtrl;
        wxTextCtrl* ToTextCtrl;
        //*)

        bool distributed = false, pre_empty = false, left_down=false, first_print = true;
        mpFXYVector* vectorLayer;
        std::vector<wxString> vertice_labels;

        DECLARE_EVENT_TABLE()
};

#endif // CS1231MAIN_H
