FROM node:lts

USER root

RUN npm install -g atcoder-cli

RUN apt-get update && \
    apt-get -y install --reinstall ca-certificates && \
    apt-get -y install software-properties-common && \
    apt-get -y install python3.10 python3-pip python3-venv

RUN python3 -m venv /workspace/.venv && \
    . /workspace/.venv/bin/activate && \
    pip install --upgrade pip && \
    pip install online-judge-tools numpy sortedcontainers

RUN acc config default-task-choice all && \
    acc config default-template python

RUN mkdir /root/.config/atcoder-cli-nodejs/python && \
    cat <<EOF >> /root/.config/atcoder-cli-nodejs/python/template.json
{
    "task": {
        "program": [
        "main.py"
        ],
        "submit": "main.py"
    }
}
EOF