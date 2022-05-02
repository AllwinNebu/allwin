import 'package:flutter/material.dart';
import 'package:english_words/english_words.dart';

class RandomWords extends StatefulWidget {
  @override
  RandomWordsState createState() => RandomWordsState();
}

class RandomWordsState extends State<RandomWords> {
  final _randomWordPairs = <WordPair>[];
  final _savedWordPair = Set<WordPair>();

  get color => null;

  Widget _buildList() {
    return ListView.builder(
      padding: const EdgeInsets.all(16.1),
      itemBuilder: (context, item) {
        if (item.isOdd) return Divider();

        final index = item ~/ 2;

        if (index >= _randomWordPairs.length) {
          _randomWordPairs.addAll(generateWordPairs().take(10));
        }

        return _buildRow(_randomWordPairs[index]);
      },
    );
  }

  Widget _buildRow(WordPair pair) {
    final alreadySaved = _savedWordPair.contains(pair);

    return ListTile(
        title: Text(
          pair.asPascalCase,
          style: TextStyle(
            color: Colors.white,
            fontSize: 21.3,
          ),
        ),
        trailing: Icon(alreadySaved ? Icons.label : Icons.label_important,
            color: alreadySaved ? Colors.red : Colors.white),
        onTap: () {
          setState(() {
            if (alreadySaved) {
              _savedWordPair.remove(pair);
            } else {
              _savedWordPair.add(pair);
            }
          });
        });
  }

  void _pushSaved() {
    Navigator.of(context)
        .push(MaterialPageRoute(builder: (BuildContext context) {
      final Iterable<ListTile> tile = _savedWordPair.map((WordPair pair) {
        return ListTile(
          title: Text(
            pair.asPascalCase,
            style: TextStyle(color: Colors.white, fontSize: 21.3),
          ),
        );
      });

      final List<Widget> divided = ListTile.divideTiles(
        context: context,
        tiles: tile,
      ).toList();

      return Scaffold(
        appBar: AppBar(
          title: Text(
            'Saved Words',
            style: TextStyle(
              color: Colors.black,
              fontSize: 25.5,
            ),
          ),
        ),
        body: ListView(
          children: divided,
        ),
      );
    }));
  }

  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: Text(
            'Click App',
            style: TextStyle(
              color: Colors.black,
              fontSize: 25.5,
            ),
          ),
          actions: <Widget>[
            IconButton(
              color: Colors.black,
              icon: Icon(Icons.label),
              onPressed: _pushSaved,
            )
          ],
        ),
        body: _buildList());
  }
}
