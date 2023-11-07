class Account:
    def __init___(self, acc_no, acc_holder, acc_bal):
        self._acc_no = acc_no
        self._acc_holder = acc_holder
        self._acc_bal = acc_bal

    def details(self):
        print(self._acc_no)
        print(self._acc_holder)
        print(self._acc_bal)
