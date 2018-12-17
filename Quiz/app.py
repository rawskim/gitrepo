#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  app.py
from flask import g
from modele import *
from views import *

app = Flask(__name__)

@app.before_request
def before_request():
    g.db = baza
    f.db.connect()

@app.after_request
def after_request(response):
    g.db.close()
    return response

#widok domyslny
@app.route("/")
def hello():
    return render_template('index.html')

@app.route("/strona")
def strona():
    return render_template('strona.html')

if __name__ == '__main__':
    app.run(debug=True)
