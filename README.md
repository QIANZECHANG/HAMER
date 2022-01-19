# HAMER
An automated memory error repair tool based on hybrid program analysis

# Requirement

* clang-12
* python3
* pycparser
* Z3

# Installation

```
pip install pycparser
pip install z3-solver
```
You can install SAVER and Infer from [here](https://github.com/kupl/SAVER_public)

# Usage 

For running experimental data, you can just use the command below:

```
python3 src/main.py {pathtotest}/src.c
```
To run SAVER, you need to run Infer first:
```
infer -g run -- clang -c infer.c
infer saver --error-report report.json
```