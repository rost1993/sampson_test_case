import sys
import reverse
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtGui import QIcon

from gui_reverse import Ui_MainWindow

class MainFirstProgram(QtWidgets.QMainWindow):
	def __init__(self):
		super(MainFirstProgram, self).__init__()
		self.ui = Ui_MainWindow()
		self.ui.setupUi(self)
		self.init_UI()

	def init_UI(self):
		self.ui.btnReverseText.clicked.connect(self.reverse)

	def reverse(self):
		self.ui.lineEditReverseText.setText(reverse.reverseString(self.ui.lineEditSourceText.text()))

app = QtWidgets.QApplication([])
application = MainFirstProgram()
application.show()

sys.exit(app.exec())