#!/bin/zsh

# Fetch the latest state from GitHub
git fetch origin

echo "🔍 Commits currently on GitHub (origin):"
git log origin/$(git rev-parse --abbrev-ref HEAD) --oneline -n 10

echo "\n📦 Commits you have locally but not on GitHub:"
git log origin/$(git rev-parse --abbrev-ref HEAD)..HEAD --oneline
