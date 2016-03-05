//--------------------------------------------------------------------------------------------------
// 
///	@PROJECT	gtest-gui
/// @BRIEF		main window for the gtest gui
///	@DETAILS	
//
//--------------------------------------------------------------------------------------------------
//
// The MIT License (MIT)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
// and associated documentation files (the "Software"), to deal in the Software without 
// restriction, including without limitation the rights to use, copy, modify, merge, publish, 
// distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all copies or 
// substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//--------------------------------------------------------------------------------------------------
//
// ATTRIBUTION:
// Parts of this work have been adapted from: 
//
//--------------------------------------------------------------------------------------------------
// 
// Copyright (c) 2016 Nic Holthaus
// 
//--------------------------------------------------------------------------------------------------

#ifndef mainwindow_h__
#define mainwindow_h__

//------------------------------
//	INCLUDE
//------------------------------

// Qt
#include <QMainWindow>

//------------------------------
//	FORWARD DECLARATIONS
//------------------------------

class MainWindowPrivate;

//--------------------------------------------------------------------------------------------------
//	CLASS: MainWindow
//--------------------------------------------------------------------------------------------------
/// @brief		main window for the gtest-gui
/// @details	
//--------------------------------------------------------------------------------------------------
class MainWindow : public QMainWindow
{
public:

	explicit MainWindow();
	virtual ~MainWindow();
	
protected:


	
private:

	Q_DECLARE_PRIVATE(MainWindow);

	MainWindowPrivate*	d_ptr;

};	// CLASS: MainWindow

#endif // mainwindow_h__