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
#include <mathplot.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/menu.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)
#include <bits/stdc++.h>
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
        static const long ID_LOGICTEXTCTRL;
        static const long ID_ANDBTN;
        static const long ID_ORBTN;
        static const long ID_COMPUTEBTN;
        static const long ID_EQUATIONRICHTEXTCTRL;
        static const long ID_NEGATEBTN;
        static const long ID_IMPLYBTN;
        static const long ID_CLEARBTN;
        static const long ID_LOGICGRID;
        static const long ID_LOGICPANEL;
        static const long ID_INPUTTEXTCTRL;
        static const long ID_CONVERTBTN;
        static const long ID_OUTPUTBASETEXTCTRL;
        static const long ID_BASETEXTCTRL;
        static const long ID_INPUTFACTORISETEXTCTRL;
        static const long ID_FACTORISEBTN;
        static const long ID_OUTPUTFACTORISETEXTCTRL;
        static const long ID_INPUT2FACTORISETEXTCTRL;
        static const long ID_LCMBTN;
        static const long ID_GCFBTN;
        static const long ID_OUTPUT2FACOTRISETEXTCTRL;
        static const long ID_SWAPBTN;
        static const long ID_EUCLIDEANRICHTEXTCTRL;
        static const long ID_EUCLIDEANLBL;
        static const long ID_EUCLIDEANBTN;
        static const long ID_EXPRESSIONTEXTCTRL;
        static const long ID_EVALUATEBTN;
        static const long ID_EXPRESSIONRICHTEXTCTRL;
        static const long ID_MODULUSTEXTCTRL;
        static const long ID_MODULUSLBL;
        static const long ID_EXPRESSION2TEXTCTRL;
        static const long ID_EQUIVALENTLBL;
        static const long ID_PANEL2;
        static const long ID_GRAPHTEXTCTRL;
        static const long ID_GRAPHMATHPLOT;
        static const long ID_PLOTBTN;
        static const long ID_RANGEXLBL;
        static const long ID_RANGEXTEXTCTRL;
        static const long ID_XINTEGERCHKBOX;
        static const long ID_NOOFPOINTSLBL;
        static const long ID_NOOFPOINTSTEXTCTRL;
        static const long ID_OPERATORSLBL;
        static const long ID_FUNCTIONLBL;
        static const long ID_TRIGOLBL;
        static const long ID_INEQUALITYLBL;
        static const long ID_LOGICALLBL;
        static const long ID_EXAMPLESLBL;
        static const long ID_FIBONNACCIBTN;
        static const long ID_PIECEWISEBTN;
        static const long ID_POLYNOMIALBTN;
        static const long ID_FLOORBTN;
        static const long ID_GRAPHPANEL;
        static const long ID_INORDERTEXTCTRL;
        static const long ID_POSTORDERTEXTCTRL;
        static const long ID_PREORDERTEXTCTRL;
        static const long ID_PREORDERLBL;
        static const long ID_INORDERLBL;
        static const long ID_POSTORDERLBL;
        static const long ID_COMPUTEORDERBTN;
        static const long ID_TREERICHTEXTCTRL;
        static const long ID_TREEPANEL;
        static const long ID_MATRIXGRID;
        static const long ID_DETERMINANTBTN;
        static const long ID_DETERMINANTTEXTCTRL;
        static const long ID_ROWSLBL;
        static const long ID_ROWSTEXTCTRL;
        static const long ID_SETGRIDBTN;
        static const long ID_ROUTESBTN;
        static const long ID_ROUTESRICHTEXTCTRL;
        static const long ID_ROUTESTEXTCTRL;
        static const long ID_LENGTHLBL;
        static const long ID_FROMLBL;
        static const long ID_TOLBL;
        static const long ID_FROMTEXTCTRL;
        static const long ID_TOTEXTCTRL;
        static const long ID_ROUTESRADIOBOX;
        static const long ID_CLEARMATRIXBTN;
        static const long ID_MAKESYMMETRICBTN;
        static const long ID_LABELSBTN;
        static const long ID_STATICTEXT1;
        static const long ID_LABELSTEXTCTRL;
        static const long ID_FILLEMPTYBTN;
        static const long ID_GRAPH2PANEL;
        static const long ID_NOTEBOOK;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_MAINSTATUSBAR;
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
