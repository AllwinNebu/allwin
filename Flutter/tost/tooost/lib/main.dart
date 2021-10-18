import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  get appBar => null;

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        theme: ThemeData(primaryColor: Colors.black),
        title: 'stupid app',
        home: Scaffold(
          appBar: AppBar(
            backgroundColor: Colors.black,
            title: const Center(
              child: Text('stupid app'),
            ),
            actions: <Widget>[
              IconButton(onPressed: poopy, icon: const Icon(Icons.settings))
            ],
          ),
          body: const Center(
            child: Text(
              'welcome',
              style: TextStyle(fontSize: 14),
            ),
          ),
        ));
  }

  void poopy() {}
}
