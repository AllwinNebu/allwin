import 'dart:io';

class Mark {
  String name = '';
  String teacherName = '';
  int rollNo = 0;

  var comp = 0;
  var mat = 0;
  var eng = 0;
  var phy = 0;
  var chem = 0;
  var mala = 0;

  var mark = 0;
  var average = 0.0;

  var extra_mark_comp = 0;
  var extra_mark_mat = 0;
  var extra_mark_eng = 0;
  var extra_mark_phy = 0;
  var extra_mark_chem = 0;
  var extra_mark_mala = 0;

  void inputBasic() {
    stdout.write('enter your name teacher : ');
    this.teacherName = stdin.readLineSync()!;

    stdout.write('enter the name of the student : ');
    this.name = stdin.readLineSync()!;

    stdout.write('enter  the roll number of the student : ');
    this.rollNo = int.parse(stdin.readLineSync()!);
  }

  void inputMark() {
    stdout.write('enter the mark in computer : ');
    this.comp = int.parse(stdin.readLineSync()!);

    stdout.write('enter the mark in maths : ');
    this.mat = int.parse(stdin.readLineSync()!);

    stdout.write('enter the mark in english : ');
    this.eng = int.parse(stdin.readLineSync()!);

    stdout.write('enter  maths in physics : ');
    this.phy = int.parse(stdin.readLineSync()!);

    stdout.write('enter mark in chemistry : ');
    this.chem = int.parse(stdin.readLineSync()!);

    stdout.write('enter mark in malayalam : ');
    this.mala = int.parse(stdin.readLineSync()!);
  }

  void inputExtraMark() {
    stdout.write('enter the extra mark given by the teacher in computer : ');
    this.extra_mark_comp = int.parse(stdin.readLineSync()!);

    stdout.write('enter the extra mark given  by the teacher in maths : ');
    this.extra_mark_mat = int.parse(stdin.readLineSync()!);

    stdout.write('ebter the extra mark given by the teacher in english : ');
    this.extra_mark_eng = int.parse(stdin.readLineSync()!);

    stdout.write('enter the extra mark given by the the teacher in physics : ');
    this.extra_mark_phy = int.parse(stdin.readLineSync()!);

    stdout.write('enter the extra mark given by the teacher in chemistry : ');
    this.extra_mark_chem = int.parse(stdin.readLineSync()!);

    stdout.write('enter the extra mark given by the teacher in malayalam :  ');
    this.extra_mark_mala = int.parse(stdin.readLineSync()!);
  }

  void calculate() {
    this.average =
        (this.eng + this.comp + this.mat + this.phy + this.chem + this.mala) /
            6;
    var a = this.eng + this.comp + this.mat + this.phy + this.chem + this.mala;

    var b = this.extra_mark_chem +
        this.extra_mark_comp +
        this.extra_mark_eng +
        this.extra_mark_mala +
        this.extra_mark_mat +
        this.extra_mark_phy;

    this.mark = a + b;
  }

  void output() {
    print('welcome teacher $teacherName');

    print('pupils name : $name');
    print('the roll number of the std : $rollNo');

    print(' mark in english : $eng');
    print(' mark in computer : $comp');
    print(' mark in maths : $mat');
    print(' mark in physics : $phy');
    print(' mark in chemistry : $chem');
    print(' mark in malayalam : $mala');

    print('the extra mark in english : $extra_mark_eng');
    print('the extar mark in computer : $extra_mark_comp');
    print('the extra mark in maths : $extra_mark_mat');
    print('the extra mark in physics : $extra_mark_phy');
    print('the extra mark in chemistry : $extra_mark_chem');
    print('the extra mark  in malayalam : $extra_mark_mala');

    print('$name  average mark is : $average');
    print('$name mark including the extra mark is : $mark');
  }
}

main() {
  Mark mark1 = Mark();

  stdout.write('if you are teacher enter the keyword \n');
  String keyword = stdin.readLineSync()!;

  if (keyword == 'teacher') {
    for (var i = 1; i >= 0; i++) {
      stdout.write(
          'enter your choice CONTINUE to continue or anything else to end \n');
      String cho = stdin.readLineSync()!;

      if (cho == 'continue') {
        mark1.inputBasic();
        mark1.inputMark();
        mark1.inputExtraMark();
        mark1.calculate();
        mark1.output();
      } else {
        break;
      }
    }
  } else {
    print('You stupid student GET OUT!');
  }
}
